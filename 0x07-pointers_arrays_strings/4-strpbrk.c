#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: string to be searched
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
