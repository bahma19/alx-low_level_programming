#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * woord_len - locates the index marking the end of the first word contained within a string.
 * @str: the string to br searched
 *
 * Return: the index marking the end of the initial word pointrd to by str
 */
int world_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index;
	}
	return (len);
}
/**
