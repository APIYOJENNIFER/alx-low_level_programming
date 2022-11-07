#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: hold initial segment of s
 * @accept: number of bytes
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					k++;
				}
			}
		}
		else
		{
			return (k);
		}
	}
	return (k);
}
