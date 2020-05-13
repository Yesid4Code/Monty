#include "monty.h"

int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	unsigned int index_line = 0;
	FILE *fp = NULL;
	char *phrase = NULL, *instruct = NULL;
	size_t n = 0;

	if (argc != 2)
	{
		dprintf(STDOUT_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fs == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*on_exit(free_phrase, &phrase);*/
	/*on_exit(free_stack, &stack);*/
	/*on_exit(m_fs_close, fp);*/
	while (getline(&phrase, &n, fp) != -1)
	{
		index_line++;
		op = strtok(phrase, "\n\t\r ");
		if (op != NULL && instruct[0] != '#')
		{
			get_intruct(instruct, &stack, index_line);
		}
	}
	exit(EXIT_SUCCESS);
}
