#include "lists.h"

/**
 * insert_dnodeint_at_index-insert
 * Return:list
 * @h:input
 * @idx:where to put it
 * @n:value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	if (idx == 0)
		return (add_dnodeint(&*h, n));

	while (current != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current;
			new->prev = current->prev;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		i++;
		current = current->next;
	}

	if (idx > i)
		return (NULL);

	return (add_dnodeint_end(&*h, n));
}
