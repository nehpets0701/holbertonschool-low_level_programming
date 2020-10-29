#include "lists.h"
#include <stddef.h>

/**
 *list_len-length
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int length = 1;

	if (current == NULL)
		return (0);

	while (current->next != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
