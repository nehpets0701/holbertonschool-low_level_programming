#include "lists.h"

/**
 * add_dnodeint-add
 * Return:dlistint_t
 * @head:list
 * @n:value
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
