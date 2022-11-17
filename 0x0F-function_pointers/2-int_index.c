#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: pointer to array
 * @size: array size
 * @cmp: function pointer to compare function
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			i = 0;
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			i++;
			}
		}
	}
	return (-1);
}
