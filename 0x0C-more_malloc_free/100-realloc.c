#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_realloc-realloc
 *Return:0
 *@ptr:old location
 *@old_size:old size
 *@new_size:new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return malloc(new_size);
	else if (new_size <= old_size)
		return (ptr);
	else
	{
		free(ptr);
		ptr = malloc(new_size);
	}
}

/**
 *_memcpy-copy memory area
 *Return:char
 *@dest:dest
 *@src:src
 *@n:number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
