#include "monty.h"

/**
 * get_instruct - check op against valid instructions
 * @instruct: instruction to check
 * @stack: double pointer to the beginnig of the stack
 * @index_line: script line index
 *
 * Return: void
 */
void get_instruct(char *instruct, stack_t **stack, unsigned int index_line)
{
	size_t i;

	instruction_t check_instruct[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{NULL, NULL}
	};

	for (i = 0; check_instruct[i].opcode != NULL; i++)
	{
		if (strcmp(check_instruct[i].opcode, instruct) == 0)
		{
			check_instruct[i].f(stack, index_line);
			return;
		}
	}

	dprintf(STDOUT_FILENO, "L%u: unknown instruction %s\n", index_line, instruct);
	free(instruct);
	exit(EXIT_FAILURE);
}
