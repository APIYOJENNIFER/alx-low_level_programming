#include "main.h"
/**
 * _strchr - locate character in a string
 * @s: pointer to string
 * @c: holds character if available
 *
 * Return: pointer to the first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
