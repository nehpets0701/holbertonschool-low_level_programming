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
	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
