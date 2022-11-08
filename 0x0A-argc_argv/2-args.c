#include <stdio.h>
/**
 * main - print all arguments received
 * @argc: arguments count
 * @argv: pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
