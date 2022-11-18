#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - print opcodes
 * @c: pointer to function
 * @n: bytes
 */
void print_opcodes(char *c, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%.2hhx", c[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(char argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
