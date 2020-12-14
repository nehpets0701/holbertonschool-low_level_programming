#include "lists.h"

/**
 * delete_dnodeint_at_index-delete
 * Return:list
 * @head:input
 * @index:which one to delete
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;


	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
			break;
		if (i == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}

	if (index > i)
		return (-1);

	temp->prev->next = NULL;
	free(temp);
	return (1);
}
