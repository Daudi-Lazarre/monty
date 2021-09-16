#include "monty.h"

/**
 * push_function - Pushes a new node
 * @head: New node
 * @line_number: Line to read
 *
 * Return: Void
 */

void push_function(node_t **head, unsigned int line_number)
{
	node_t *temp;
	(void)line_number;

	temp = node;
	temp->prev = NULL;
	node = *head;
        node->next = temp;
	temp->prev = node;
}
