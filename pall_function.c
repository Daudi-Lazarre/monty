#include "monty.h"

/**
 * pall_function - prints all the values on the stack, starting from the top.
 * @head: New node
 * @line: Line to read
 *
 * Return: Void
 */

void pall_function(node_t **head, __attribute__((unused)) unsigned int line)
{
	node_t *temp_node;

	if (head && *head)
	{
		temp_node = *head;
		while (temp_node)
		{
			fprintf(stdout, "%d\n", temp_node->n);
			temp_node = temp_node->next;
		}
	}
}
