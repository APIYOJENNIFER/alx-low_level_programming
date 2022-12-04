#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: pointer to structure
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
