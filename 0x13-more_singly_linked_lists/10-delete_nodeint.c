#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 *max-max
 *Return: number of nodes
 *@h: head
 */
size_t max(const listint_t *h)
{
	const listint_t *temp = h;
	int maximum = 0;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		temp = temp->next;
		maximum++;
	}

	return (maximum - 1);
}

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
	unsigned int maximum = max(*head);

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	if (index > maximum)
		return (-1);

	for (i = 0; i < index - 1; i++)
		current = current->next;

	temp = current->next->next;
	free(current->next);
	current->next = temp;
	return (1);
}
