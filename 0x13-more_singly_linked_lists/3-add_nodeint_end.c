#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *add_nodeint_end-add node at end
 *Return: address of new node/ NULL
 *@head:start of list
 *@n:value
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
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
