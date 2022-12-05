#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to head
 * @index: node position
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;

	while (i < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		i++;
	}
	return (head);
}
