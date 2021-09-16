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
	node_t *new;
	(void)line_number;

	new = *head;
	printf("%d DOLPHINS AND KILLER WHALES\n", (*head)->n);
	new->prev = NULL;
	printf("GERMAN SHEPHERDS AND SCHNAUZERS.\n");
	node = *head;
	node->next = new;
	new->prev = node;
}
