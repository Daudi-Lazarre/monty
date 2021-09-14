#include "monty.h"

node_t *node = NULL;

void push_function(node_t **head, unsigned int line)
{
	printf("push function activated\n");
}

void pall_function(node_t **head, unsigned int line)
{
	printf("pall function activated\n");
}

int main(int argc, char **argv)
{
	char *path;
	FILE *fd;
	unsigned int linenum = 1;
	char *buffer = NULL;
	size_t size = 0;
	char *opcode = NULL, *command = NULL;
	int i = 0;

	if (argc != 2)
	{
		perror("Bad argument count");
	}

	/* argv[1] is the file name from command line */
	path = argv[1];

	if (!path)
		perror("Error");
