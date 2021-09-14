#include "monty.h"

/**
 * pall_function - prints all the values on the stack, starting from the top.
 * @head: New node
 * @line: Line to read
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

void pall_function(node_t **head, unsigned int line)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
}
