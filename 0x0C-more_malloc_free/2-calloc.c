#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: array elements
 * @size: size of elements
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;

	unsigned int i, total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ch = malloc(nmemb * size);
	if (ch == NULL)
	{
		return (NULL);
	}
	i = 0;

	total = nmemb * size;
	while (i < total)
	{
		ch[i] = 0;
		i++;
	}
	return (ch);
}
