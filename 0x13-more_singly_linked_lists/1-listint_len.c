#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - number of elements in a list
 * @h: pointer to structure
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
