#include "monty.h"

/**
 * main - The monty program in a nutshell
 * @argc: Number of arguments
 * @argv: The argument options
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char **argv)
{
	char *path;
	FILE *funcPointer;
	unsigned int lineNum = 1;

	/*If the user does not give any file or more than one argument to your
	/* program, print the error message*/
	if (argc > 2 || argc <= 1)
	{
		printf(stderr, "USAGE: Monty file.\n")
			exit(EXIT_FAILURE);
	}

	/* If, for any reason, it’s not possible to open the file,
        /* print the error message Error: Can't open file <file>,
        /* followed by a new line, and exit with the status EXIT_FAILURE */
	/* insert fileReader function -> getline */

	if (!funcPointer)
	{
		printf(stderr, "Error: Can't open file %s\n", funcPointer);
	}

	/* If the file contains an invalid instruction, print the error message
	/* L<line_number>: unknown instruction <opcode>, followed by a new line,
        /* and exit with the status EXIT_FAILURE */

	if (funcPointer == EXIT_FAILURE)
		exit(EXIT_FAILURE);

	/* lineByLine function will read the data from file */
	if (lineByLine(funcPointer) == EXIT_FAILURE)
		exit (EXITFAILURE);

	return(EXIT_SUCCESS);


}
