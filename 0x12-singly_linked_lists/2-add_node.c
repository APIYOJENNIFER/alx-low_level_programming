#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add node at the beginning of list
 * @head: pointer to head
 * @str: string to be duplicated
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int slen = 0;

	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	while (str[slen] != '\0')
	{
		slen++;
	}

	add->str = strdup(str);
	add->len = slen;
	add->next = *head;
	*head = add;
	return (add);
}
