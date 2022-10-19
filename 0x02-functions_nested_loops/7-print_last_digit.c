#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: holds number
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int res;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	res = n % 10;

	if (res < 0)
	{
		res = res * (-1);
	}

	_putchar(res + 48);

	return (res);
}

