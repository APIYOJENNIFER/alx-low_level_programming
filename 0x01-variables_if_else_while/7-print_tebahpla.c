#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0 if success
 */
int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

