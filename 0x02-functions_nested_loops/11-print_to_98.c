#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: hold value
 * Return: 0 Always
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (!(i == 98))
			{
				printf("%d, ", i);
			}
			else
			{
				printf("98");
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (!(i == 98))
			{
				printf("%d, ", i);
			}
			else
			{
				printf("98");
			}
		}
		printf("\n");
	}
}
