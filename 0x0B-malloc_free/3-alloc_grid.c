#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid-alloc
 *Return:int
 *@width:input
 *@height:input
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int j;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (b = 0 ; b < height ; b++)
	{
		ptr[b] = malloc(width * sizeof(int));
		if (ptr[b] == NULL)
		{
			for (b = 0 ; b < height ; b++)
				free(ptr[b]);
			free(ptr);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			ptr[b][j] = 0;
	}
	return (ptr);
}
