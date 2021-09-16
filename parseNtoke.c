#include "monty.h"

/**
 * push_function - Pushes a new node
 * @head: New node
 * @line_number: Line to read
 *
 * Return: Void
 */

void parseNtoke(FILE *fd)
{
	char *buffer = NULL;
	int i;
	size_t size;
	char *opcode;
	char *command;
	node_t *newNode;
	unsigned int linenum = 1;
	instruction_t opcodes [] = {
		{"push", push_function},
		{"pall", pall_function},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"pint", pint},
		{NULL, NULL}
	};


while (getline(&buffer, &size, fd) != EOF)
	{
		opcode = strtok(buffer, " \n"); /* opcode (ie: PUSH, PALL, PINT) */
		if (!opcode)
			return;

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
		linenum++;
	}
free(buffer);
fclose(fd);
return;
}
