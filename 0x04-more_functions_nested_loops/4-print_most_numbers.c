#include "main.h"

/**
 * print_most_numbers - print numbers 0 - 9 except 2 and 4
 *
 * Return: 0 Always
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (!(i == 2 || i == 4))
		{
			_putchar(48 + i);
		}
	}
	_putchar('\n');
}
