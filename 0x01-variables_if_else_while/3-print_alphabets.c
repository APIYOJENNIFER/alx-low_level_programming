#include <stdio.h>

/**
 * main - print in lowercase, the uppercase
 *
 * Return: 0 if success
 */
int main(void)
{
	char c_upper = 'A';

	char c_lower = 'a';

	for (; c_upper <= 'Z'; c_upper++)
	{
		for (; c_lower <= 'z'; c_lower++)
		{
			putchar(c_lower);
		}
		putchar(c_upper);
	}
	putchar('\n');
	return (0);
}

