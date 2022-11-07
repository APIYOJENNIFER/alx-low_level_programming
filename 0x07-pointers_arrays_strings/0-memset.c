#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: holds number of bytes
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
