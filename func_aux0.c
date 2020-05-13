#include "monty.h"

/**
 * add_node - function that adds a new node at the begging of a list.
 * @stack: header of the list.
 * @n: number to insert in the list.
 *
 * Return: the addres of new node, or NULL if if failed
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new = NULL;

	if (stack == NULL)
		return (NULL);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*stack == NULL)
		new->next = NULL;
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
	}
	*stack = new;
	return (new);
}
