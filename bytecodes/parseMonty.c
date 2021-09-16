#include "monty.h"

/**
 *
 *
 *
 *
 **/


	while (getline(&buffer, &size, fd) != EOF)
	{
		opcode = strtok(buffer, " \n"); /* opcode (ie: PUSH, PALL, PINT) */
		command = strtok(NULL, " \n"); /* NULL unless there's a number for PUSH */

		printf("%s helllooo", opcode);
		printf("%s helllooo", command);
	        for (i = 0; opcodes[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, opcodes[i].opcode) == 0)
			{
					printf("helloooo");

					/* function pointer ran with the opcode matched from
					opcodes[] list */

			 if ((strcmp(opcode, "push") == 0))
                		{
					printf("faiailling?");
                        		newNode = add_dnodeint(atoi(command));
					opcodes[i].f(&newNode, linenum);
                		}
			else
				{
				printf("helllllo");
				opcodes[i].f(&node, linenum);
				}
			}
		}

	}
