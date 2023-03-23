#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_dlistint - Print all elements of a list
 * @h: pointer to list
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
/*	dlistint_t ptr = h

	if (h == NULL)
		return (0);
*/
	do
	{
		h = h->next;
		printf("%d\n", h->n);
		i++;
	}while(h->next != NULL);

	return (i);

}
