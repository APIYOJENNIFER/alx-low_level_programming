#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements in a list
 * @h: pointer to structure
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
