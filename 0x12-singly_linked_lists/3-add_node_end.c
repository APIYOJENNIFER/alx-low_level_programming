#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add new node to end of list
 * @head: pointer to head
 * @str: string to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *temp;

	int slen = 0;

	if (str == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	while (add->str[slen] != '\0')
		slen++;
	add->len = slen;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);
}
