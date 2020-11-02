#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint-print list
 *Return: number of nodes
 *@h:pointer
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
