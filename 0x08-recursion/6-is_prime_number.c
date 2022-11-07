#include "main.h"
/**
 * _p_num - prime number
 * @a: hold value
 * @b: hold value
 *
 * Return: result
 */
int _p_num(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (_p_num(a + 1, b));
	}
}

/**
 * is_prime_number - check if prime number
 * @n: hold value
 *
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_p_num(2, n));
}
