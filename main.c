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

	char *path = NULL;
	FILE *fd;

	if (argc != 2)
	{
		print_error(ERR_ARG, 0);
	}

	/* argv[1] is the file name from command line */
	path = argv[1];

	if (!path)
		perror("Bad file name");

	fd = fopen(path, "r");

	if (!fd)
		perror("Bad file descriptor");

	/* Check that we can access & read the file */
	if (access(path, R_OK) == -1)
		perror("Error reading");

	parseNtoke(fd);
	fclose(fd);
	return (0);
}
