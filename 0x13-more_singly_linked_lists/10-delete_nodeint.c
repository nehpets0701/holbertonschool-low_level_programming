#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *delete_nodeint_at_index-delete n
 *Return: 1 if success, -1 if failure
 *@head:start of list
 *@index:index to delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		current = current->next;

	temp = current->next->next;
	free(current->next);
	current->next = temp;
	return (1);
}
