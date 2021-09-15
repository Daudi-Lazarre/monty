#include "monty.h"

/**
 * push_function - Pushes a new node
 * @head: New node
 * @line: Line to read
 *
 * Return: Void
 */

void push_function(node_t **head, unsigned int line)
{
	 dlistint_t *new;

	 if (!head)
		 return(NULL);

	 new = malloc(sizeof(dlistint_t));

	 if (!new)
		 return(NULL);

	 line = new->line;
	 *head = line->next;
	 new->prev = NULL;

	 if (*head)
		 (*head)->prev = new;

	 *head = new;

}
