#include "main.h"
/**
 * print_numbers - print numbers 0 - 9
 *
 * Return: 0 Always
 */
void print_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		_putchar(48 + i);
	}
	_putchar('\n');
}

