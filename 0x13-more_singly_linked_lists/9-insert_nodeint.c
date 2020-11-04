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
 *insert_nodeint_at_index-insert
 *Return: adress of new node or null if fails
 *@head: start of list
 *@idx: where to put new node
 *@n: value of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *index, *new;
	unsigned int i = 0, maximum = 0;

	if (head == NULL)
		return (NULL);

	maximum = max(*head);
	index = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == maximum + 1)
	{
		while (index->next != NULL)
			index = index->next;
		new->n = n;
		new->next = NULL;
		index->next = new;
		return (new);
	}
	if (idx > maximum + 1)
		return (NULL);

	if (index == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	for (i = 0; i < idx - 1; i++)
		index = index->next;
	new->next = index->next;
	index->next = new;
	new->n = n;
	return (new);
}
