#include "main.h"
/**
 * _sqrt - sqrt
 * @a: holds value
 * @b: holds value
 *
 * Return: result
 */
int _sqrt(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (_sqrt(a + 1, b));
}

/**
* _sqrt_recursion - compute natural square root of a number
* @n: holds number
* Return: natural square root
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(1, n));
}
