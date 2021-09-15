#include "monty.h"

/**
 * pall_function - prints all the values on the stack, starting from the top.
 * @head: New node
 * @line: Line to read
 *
 * Return: Void
 */

void pall_function(node_t **head,__attribute__((unused)) unsigned int line)
{
	node_t *count;

	if (!(*head) ||!(*head)->next)
	


	for (count = *head; count; count = count->next)
	{
		printf("%d\n", count->n);
	}
}
