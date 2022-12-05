#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- delete node a given index
 * @head: pointer to head
 * @index: node position
 *
 * Return: 1 if success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *temp;

	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	temp = *head;
	i = 0;
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	next = temp->next;
	temp->next = next->next;
	free(next);
	return (1);
}
