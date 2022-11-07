#include "main.h"
/**
 * _pow_recursion - return the value of a number raised to a given power
 * @x: value
 * @y: power
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}