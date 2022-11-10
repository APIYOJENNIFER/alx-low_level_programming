#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size
 * @c: character
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *ch;

	unsigned int i;

	ch = malloc(size * sizeof(char));

	if (size == 0 || ch == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ch[i] = c;
		i++;
	}

	return (ch);
}
