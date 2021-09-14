#include "monty.h"

/**
 * pint - print the the node head
 * @head: The head of the stack/list
 * @line_number: number line
 */

void pint(node_t **head, unsigned int line_number)
{
	/*If it's not the head, print the error */
	if (!head || !*head)
		print_error(ERR_PINT, line_number);
}

/**
 * pop - Remove the head of the stack/list
 * @head: The head of the stack/list
 * @line_number: number line
 */

void pop(node_t **head, unsigned int line_number)
{
	dlistint_t *nextInLine;

	while (head != NULL)
	{
		nextInLine = head->next;
		free(head);
		head = nextInLine;
	}
	if (head == NULL)
		print_error(ERR_POP, line_number);
}

/**
 * nop - Don't do anything
 * @head: Top of the stack
 * @line_number: Line number
 */
void nop(**head, unsigned int line_number __attribute__(()unused))
{
	(void)head;
}
