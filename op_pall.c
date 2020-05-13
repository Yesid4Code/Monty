#include "monty.h"

/**
 * op_pall - function that print the content of a list.
 * @stack: pointer to the head of the list.
 *
 * Return: nothing
 */
void op_pall(stack_t **stack)
{
	stack_t *head = *stack
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return; /* check this */
}
