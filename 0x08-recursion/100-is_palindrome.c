#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: holds string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * palindrome - palindrome
 * @s: hold string
 * @i: position
 * @j: position
 *
 * Return: result
 */
int palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1);
		}
		else
		{
			return (palindrome(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome(char *s)
{
	return (palindrome(s, 0, _strlen_recursion(s) - 1));
}
