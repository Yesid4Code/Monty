#include "monty.h"

/**
 * free_phrase - free line pointer returned by getline
 * @status: exit status
 * @phrase: pointer to phrase
 *
 * Return: void
 */
void free_phrase(int status, void *phrase)
{
	char **lineptr = phrase;

	(void)status;
	if (*lineptr != NULL)
		free(*lineptr);
}
