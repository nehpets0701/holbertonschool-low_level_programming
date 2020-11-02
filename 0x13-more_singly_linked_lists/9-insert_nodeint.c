#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *insert_nodeint_at_index-insert
 *Return: adress of new node or null if fails
 *@head: start of list
 *@idx: where to put new node
 *@n: value of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *headTemp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	headTemp = *head;
	while (headTemp != NULL)
	{
		if (count == idx)
		{
			temp = headTemp->next;
			tempHead->next = new;
			new->next = temp;
			return (headTemp);
		}
		count++;
		headTemp = headTemp->next;
	}
	return (NULL);
}
