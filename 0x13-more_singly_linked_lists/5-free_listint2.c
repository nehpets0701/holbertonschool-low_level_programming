#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *free_listint2-free again
 *Return: 0
 *@head: start of list
 */
void free_listint2(listint_t **head)
{
	listint_t *freeList, *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			freeList = temp->next;
			free(temp);
			temp = freeList;
		}
		*head = NULL;
	}
}
