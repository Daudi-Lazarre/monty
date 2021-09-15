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
	printf("%d\n", (*head)->n);
}

/**
 * pop - Remove the head of the stack/list
 * @head: The head of the stack/list
 * @line_number: number line
 */

void pop(node_t **head, unsigned int line_number)
{
	node_t *nextInLine;

	if (!(*head))
		print_error(ERR_POP, line_number);

	nextInLine = (*head)->next;
	if (nextInLine)
		nextInLine->prev = NULL;
		free(*head);
		*head = nextInLine;
}

/**
 * nop - Don't do anything
 * @head: Top of the stack
 * @line_number: Line number
 */
void nop(node_t **head, unsigned int line_number __attribute__((unused)))
{
	(void)head;
}
