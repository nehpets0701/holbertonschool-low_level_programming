#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *free_listint-free
 *Return: 0
 *@head:start
 */
void free_listint(listint_t *head)
{
	listint_t *freeList;

	while (head != NULL)
	{
		freeList = head;
		head = head->next;
		free(freeList);
	}
}
