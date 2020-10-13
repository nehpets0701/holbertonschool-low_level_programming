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
	int i;
	int j;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i <= height ; i++)
	{
		for (j = 0 ; j < width ; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
