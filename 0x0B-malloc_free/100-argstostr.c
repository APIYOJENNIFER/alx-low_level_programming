#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all the arguments of the program
 * @ac: number of arguments
 * @av: pointer to the arguments
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ch, *str;

	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str = av[i];
		j = 0;
		while (str[j++])
			len++;
		i++;
		len++;
	}
	ch = malloc(sizeof(char) * (len + 1));
	if (ch == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		str = av[i];
		k = 0;
		while (str[k])
		{
			ch[j] = str[k];
			k++;
			j++;
		}
		ch[j++] = '\n';
	}
	ch[j] = '\0';
	return (ch);
}
