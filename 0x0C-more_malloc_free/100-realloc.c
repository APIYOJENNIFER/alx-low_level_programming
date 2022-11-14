#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch, *old_ptr;

	unsigned int i, size;

	old_ptr = ptr;

	if (ptr == NULL)
	{
		ch = malloc(new_size);
		return (ch);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	ch = malloc(new_size);
	if (ch == NULL)
		return (NULL);
	size = new_size;
	if (new_size > old_size)
		size = old_size;
	i = 0;
	while (i < size)
	{
		ch[i] = old_ptr[i];
		i++;
	}
	free(ptr);
	return (ch);
}
