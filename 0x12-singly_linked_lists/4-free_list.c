#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *free_list-free
 *Return: 0
 *@head:head
 */
void free_list(list_t *head)
{
	list_t *freeList;

	while (head != NULL)
	{
		freeList = head;
		head = head->next;
		free(freeList->str);
		free(freeList);
	}
}
