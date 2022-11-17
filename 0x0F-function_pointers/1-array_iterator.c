#include "function_pointers.h"
/**
 * array_iterator - iterate through array of elements
 * @array: pointer to array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

