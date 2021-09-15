#include "monty.h"
/**
* swap_function - swap the top two elements of the stack
*
* @head: the stack
* @line_number: the integer to be added to the stack
* Return: Void
*/
void swap(node_t **head, unsigned int line_number)
{
	unsigned int temp;

	if (!(*head) || !((*head)->next))
		print_error(ERR_SWAP, line_number);

	temp = (*head)->n;
	(*head)->n = ((*head)->next)->n;
	((*head)->next)->n = temp;
}

/**
* add - adds the top two elements of the stack
*
* @head: the head of the stack
* @line_number: the integer to be added to the stack
* Return: Void
*/
void add(node_t **head, unsigned int line_number)
{
	unsigned int temp;

	if (!(*head) ||!(*head)->next)
		print_error(ERR_ADD, line_number);


	(*head) = (*head)->next;
	temp = (*head)->n + (*head)->prev->n;
	(*head)->n = temp;
	free((*head)->prev);
	(*head)->prev = NULL;
}	
