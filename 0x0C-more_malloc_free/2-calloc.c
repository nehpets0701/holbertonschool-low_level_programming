#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc-calloc
 *Return:0
 *@nmeb:number of blocks
 *@size:blocks
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *ptr;

	if (nmeb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmeb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
