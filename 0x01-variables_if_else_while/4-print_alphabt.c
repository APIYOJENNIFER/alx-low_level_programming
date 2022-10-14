#include <stdio.h>

/**
 * main - print all letters except q and e
 *
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

