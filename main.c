#include "monty.h"

node_t *node = NULL;

/**
 * main - The monty program in a nutshell
 * @argc: Number of arguments
 * @argv: The argument options
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	//node_t *node = NULL;
	char *path = NULL;
	FILE *fd = NULL;
	unsigned int linenum = 1;
	char *buffer = NULL;
	size_t size = 0;
	char *opcode = NULL;
	char *command = NULL;
	int i = 0;
	node_t *newNode = NULL;
	instruction_t opcodes[] = {

                        {"push", push_function},
                        {"pall", pall_function},
                        {"pop", pop},
                        {"swap", swap},
                        {"add", add},
                        {"nop", nop},
                        {"pint", pint},
                        {NULL, NULL}
                };


	if (argc != 2)
	{
		print_error(ERR_ARG, linenum);
	        // print_error("Bad argument count");
	}

	/* argv[1] is the file name from command line */
	path = argv[1];

	if (!path)
		perror("Bad file name");

	fd = fopen(path, "r");

	if (!fd)
		perror("Bad file descriptor");

	/* Check that we can access & read the file */
	if(access(path, R_OK) == -1)
		perror("Error reading");

	while (getline(&buffer, &size, fd) != EOF)
	{
		opcode = strtok(buffer, " \n"); /* opcode (ie: PUSH, PALL, PINT) */
		/* CHECKER */
		if (!opcode)
			return(0);

		command = strtok(NULL, " \n"); /* NULL unless there's a number for PUSH */

		for (i = 0; opcodes[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, opcodes[i].opcode) == 0)
			{

					/* function pointer ran with the opcode matched from
					opcodes[] list */

			 	if (strcmp(opcodes[i].opcode, "push") == 0)
                {
                    newNode = add_dnodeint(atoi(command));
						opcodes[i].f(&newNode, linenum);
                }
				else
					opcodes[i].f(&node, linenum);
			}
		}
	}

	fclose(fd);
	free(buffer);
	return (0);
}
