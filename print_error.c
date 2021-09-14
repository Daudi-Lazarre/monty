#include "monty.h"
/**
* print_error - prints the error messages
* @n_error: int error code
* @line_number: the number of the line where error took place
*
* Return: ERR_FOUND or ERR_NOT_FOUND
*/
void print_err_a(int n_error, unsigned int line_number)
{
	if (n_error == ERR_PUSH)

		fprintf(stderr, "L%d: usage: push integer\n", line_number);

	else if (n_error == ERR_PINT)

		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	
	else if (n_error == ERR_POP)

		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);

	else if (n_error == ERR_SWAP)

		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);

	else if (n_error == ERR_ADD)

		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);

	else
		return (ERROR_NOT_FOUND);



	return (ERROR_FOUND);
}