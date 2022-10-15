#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;

	int j;

	int k;

	for (; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

