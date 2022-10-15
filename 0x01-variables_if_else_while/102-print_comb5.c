#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 0;

	int j;

	int k;

	int l;

	for (; i <= 9; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 1; l <= 9; l++)
				{
					putchar(48 + i);
					putchar(48 + j);

					if (!(i == j && j == l && l == k))
					{
						putchar(' ');
					}

					putchar(48 + k);
					putchar(48 + l);

					if (!(i == j && j == l && l == k))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}

