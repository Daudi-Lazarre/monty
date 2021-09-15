#include "monty.h"

/**
 * add_nodeint - Adds node integer
 * @n: New node value
 * Return: New node :)
 **/

node_t *add_dnodeint(int num)
{
	node_t *new;

	new = malloc(sizeof(node_t));
	if (!new)
		print_error(ERR_MALLOC, 0);

	new->n = num;
	new->next = NULL;
	new->prev = NULL;

	return (new);
}
