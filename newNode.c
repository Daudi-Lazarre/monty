#include "monty.h"

/**
 * add_nodeint - Adds node integer
 * @n: New node value
 * Return: New node :)
 **/

node_t *add_dnodeint(int n)
{
	node_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(node_t));
	if (!new)
		return (NULL);

	new->n = n;

	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
