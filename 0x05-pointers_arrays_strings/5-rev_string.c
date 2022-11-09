#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	char ch = s[0];

	int count = 0, i = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (; i < count; i++)
	{
		count--;
		ch = s[i];
		s[i] = s[count];
		s[count] = ch;
	}
}
