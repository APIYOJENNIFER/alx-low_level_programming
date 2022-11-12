#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;

	int len = 0, len1 = 0, len2 = 0;

	int i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	len = len1 + len2;

	ch = malloc((sizeof(char) * len) + 1);

	if (ch == NULL)
		return (NULL);

	i = 0, j = 0;

	while (i < len1)
	{
		ch[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		ch[i] = s2[j];
		j++;
		i++;
	}
	ch[len] = '\0';
	return (ch);
}
