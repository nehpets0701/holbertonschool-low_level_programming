#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *listint_len-list length
 *Return: number of elements
 *@h: pointer
 */
size_t listint_len(const listint_t *h)
{
	int length = 1;
	const listint_t *current = h;

	if (current == NULL)
		return (0);

	while (current->next != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
