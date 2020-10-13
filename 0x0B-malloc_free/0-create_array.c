#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array-array
 *Return:char
 *@size:size
 *@c:c
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size * sizeof(char));

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0 ; i <= size ; i++)
			{
				ptr[i] = c;
			}
		}
	}
	return (ptr);
}
