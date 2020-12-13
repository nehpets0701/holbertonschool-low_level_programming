#include "lists.h"

/**
 * free_dlistint-free
 * Return:void
 * @head:input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
