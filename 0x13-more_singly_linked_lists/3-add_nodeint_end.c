#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at end of list
 * @head: pointer to head
 * @n: member variable
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *temp;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add;
	return (add);
}
