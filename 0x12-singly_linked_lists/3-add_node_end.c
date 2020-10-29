#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end-add node
 *Return: adress of new element
 *@head:head
 *@str:str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;
	int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (*head);
}
