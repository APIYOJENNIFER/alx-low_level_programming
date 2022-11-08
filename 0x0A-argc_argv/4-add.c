#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, i = 1, sum = 0;

	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (; argv[i]; i++)
	{
		count = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
