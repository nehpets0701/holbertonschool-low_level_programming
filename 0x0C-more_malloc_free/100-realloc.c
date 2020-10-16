#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *_realloc - bla
 *@ptr: n;a
 *@old_size: bla
 *@new_size: bla
 *Return: bla
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	char *p = ptr;
	unsigned int a = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size < old_size)
		old_size = new_size;
	new = malloc(new_size);
	for (a = 0; a < old_size; a++)
		new[a] = p[a];
	free(ptr);
	return (new);
}
