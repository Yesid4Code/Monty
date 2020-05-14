#ifndef MONTY_H
#define MONTY_H

/* STANDARS HEADERS */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

/* STRUCTURES */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

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
	void (*f)(stack_t **stack, unsigned int index_line);
} instruction_t;


/* OPERATORS */
void op_push(stack_t **stack, unsigned int index_line);
void op_pall(stack_t **stack, unsigned int index_line);
void op_pint(stack_t **stack, unsigned int index_line);
void op_pop(stack_t **stack, unsigned int index_line);

/* HELPER FUNCTIONS */
void get_instruct(char *instruct, stack_t **stack, unsigned int index_line);
stack_t *add_node(stack_t **stack, const int n);
int _isdigit(char *num);
void free_list(stack_t *stack);

#endif
