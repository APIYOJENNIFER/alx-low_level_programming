#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add new node at the beginning of a list
 * @head: pointer to head
 * @n: tructure member variable
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
