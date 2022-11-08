#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coins
 * @argc: arguments count
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
			}
			else if (cents >= 10)
			{
				cents -= 10;
			}
			else if (cents >= 5)
			{
				cents -= 5;
			}
			else if (cents >= 2)
			{
				cents -= 2;
			}
			else if (cents >= 1)
			{
				cents -= 1;
			}
			num++;
		}
	}
	printf("%d\n", num);
	return (0);
}
