#include "main.h"
/**
 * times_table - print 9 times table
 * @res: hold result of multiplication
 * @j: hold value for second iteration
 * Return: 0 Always
 */

void _printTable(int res, int j);

void times_table(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		int j = 0;

		for (; j <= 9; j++)
		{
			int res = i * j;

			if (j == 9)
			{
				_printTable(res, j);
			}
			else
			{
				_printTable(res, j);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
 * _printTable - print table values
 * @res: hold result of multiplication
 * @j: hold value for second iteration
 * Return: 0 Always
 */
void _printTable(int res, int j)
{

	if (res <= 9 && j == 0)
	{
		_putchar('0' + res);
	}
	else if (res <= 9)
	{
		_putchar(' ');
		_putchar('0' + res);
	}
	else
	{
		_putchar('0' + (res / 10));
		_putchar('0' + (res % 10));
	}
}

