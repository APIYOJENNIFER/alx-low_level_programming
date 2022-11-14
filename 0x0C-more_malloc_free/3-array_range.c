#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
