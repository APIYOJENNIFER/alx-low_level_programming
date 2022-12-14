#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: pointer to head
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
