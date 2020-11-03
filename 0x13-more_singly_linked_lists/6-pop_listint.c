#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *pop_listint-pop
 *Return: head node data, 0 if list is empty
 *@head:start of list
 */
int pop_listint(listint_t **head)
{
	listint_t *new, *temp;
	int data;

	temp = *head;
	if (temp == NULL)
		return (0);

	data = temp->n;
	new = temp->next;
	free(temp);
	*head = new;
	return (data);
}
