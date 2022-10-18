#include "stdio.h"

/**
 * print_alphabet - print_alphabet function
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}

