#include "lists.h"
#include<string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_node-add node
 *Return: adress of new element
 *@head: head
 *@str:str
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}
