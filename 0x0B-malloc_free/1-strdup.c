#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to new duplicate string
 * @str: pointer to string
 *
 * Return: character
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;

	char *ch;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	ch = malloc((sizeof(char) * len) + 1);

	if (ch == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < len)
	{
		ch[i] = str[i];
		i++;
	}

	ch[len] = '\0';

	return (ch);
}
