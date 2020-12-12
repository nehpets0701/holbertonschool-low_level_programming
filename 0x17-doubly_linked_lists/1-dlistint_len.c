#include "lists.h"

/**
 * dlistint_len-length
 * Return:count
 * @h:input
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
