#ifndef MONTY_H
#define MONTY_H

/* Includes */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <ctype.h>

/* MACROS */

#define ERR_PUSH 0
#define ERR_PINT 1
#define ERR_POP 2
#define ERR_SWAP 3
#define ERR_ADD 4

#define ERROR_FOUND 0
#define ERROR_NOT_FOUND 1

/*-------------*/

/* STRUCTS */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct node_s
{
        int n;
        struct node_s *prev;
        struct node_s *next;
} node_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(node_t **stack, unsigned int line_number);
} instruction_t;

/* ------------ */

/* functions */

void print_err_a(int n_error, unsigned int line_number);
void print_error(int n_error, unsigned int line_number);
void print_err_a(int n_error, unsigned int line_number);

/* opcode functions */

void push_function(node_t **head, unsigned int line);
void pall_function(node_t **head, unsigned int line);
void swap(node_t **head, unsigned int line_number);
void add(node_t **head, unsigned int line_number);
void pint(node_t **head, unsigned int line_number);
void pop(node_t **head, unsigned int line_number);
void nop(node_t **head, unsigned int line_number __attribute__((unused)));

#endif
