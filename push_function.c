#include "monty.h"

/**
 * push_function - Pushes a new node
 * @head: New node
 * @line: Line to read
 *
 * Return: Void
 */

void push_function(__attribute__((unused)) node_t **head, unsigned int line_number)
{
	char *new;
	int i, num;
	const char *ints = "0123456789";

	new = strtok(NULL, " \t");
	if (new && new[0] != '\n')
	{
		for (i = 0; new[i] && new[i] != '\n'; i++)
		{
			if (i == 0 && new[i] == '-')
				continue;
			if (!(strchr(ints, new[i])))
				print_error(ERR_PUSH, line_number);
		}
	}
	else
	{
		print_error(ERR_PUSH, line_number);
	}
	num = atoi(new);
}
