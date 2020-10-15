#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked-check
 *Return:0
 *@b:input
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}

	return (ptr);
}
