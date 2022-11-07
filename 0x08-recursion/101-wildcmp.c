#include "main.h"
/**
 * str_comp - compare strings
 * @s1: hold first string
 * @s2: hold second string
 * @i: position
 * @j: position
 * Return: result
 */
int str_comp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (str_comp(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (str_comp(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (str_comp(s1, s2, i + 1, j) || str_comp(s1, s2, i, j + 1));
	}
	return (0);
}
/**
 * wildcmp - compare two strings
 * @s1: holds first string
 * @s2: holds second string
 *
 * Return: 1 if true, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	return (str_comp(s1, s2, 0, 0));
}
