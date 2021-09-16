#include "monty.h"

/**
 * push_function - Pushes a new node
 * @head: New node
 * @line_number: Line to read
 *
 * Return: Void
 */

while (getline(&buffer, &size, fd) != EOF)
	{
		opcode = strtok(buffer, " \n"); /* opcode (ie: PUSH, PALL, PINT) */
		/* CHECKER */
		if (!opcode)
			return(0);

		command = strtok(NULL, " \n"); /* NULL unless there's a number for PUSH */

		for (i = 0; opcodes[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, opcodes[i].opcode) == 0)
			{

					/* function pointer ran with the opcode matched from
					opcodes[] list */

			 	if (strcmp(opcodes[i].opcode, "push") == 0)
                {
                    newNode = add_dnodeint(atoi(command));
						opcodes[i].f(&newNode, linenum);
                }
				else
					opcodes[i].f(&node, linenum);
			}
		}
	}
