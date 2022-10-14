#include <stdio.h>

/**
 * main - print all single digits of base 10 starting from 0
 *
 * Return: 0 if success
 */
int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

