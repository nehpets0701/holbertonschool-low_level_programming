#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *array_range-array
 *Return:int
 *@min:min
 *@max:max
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[a] = min;
		min++;
		a++;
	}
	return (ptr);
}
