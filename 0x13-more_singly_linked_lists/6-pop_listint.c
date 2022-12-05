#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to head
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int n;

	listint_t *start;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);

}
