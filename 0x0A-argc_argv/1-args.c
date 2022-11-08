#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: arguments count
 * @argv: pointer to the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
