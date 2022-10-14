#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

