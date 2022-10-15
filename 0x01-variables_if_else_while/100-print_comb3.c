#include <stdio.h>

/**
 * main - print combination of two digits
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;
	int j;

	for (; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

