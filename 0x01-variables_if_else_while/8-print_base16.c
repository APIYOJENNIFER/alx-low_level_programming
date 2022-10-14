#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: 0 if success
 */
int main(void)
{
	char c_num = '0';

	char c_alp = 'a';

	for (; c_alp <= 'f'; c_alp++)
	{
		for (; c_num <= '9'; c_num++)
		{
			putchar(c_num);
		}
		putchar(c_alp);
	}
	putchar('\n');
	return (0);
}

