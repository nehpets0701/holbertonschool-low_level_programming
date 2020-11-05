#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *clear_bit-sets given bit to 0
 *Return:1/-1
 *@n:input
 *@index: given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int change = 1 << index;

	if (index > 63)
		return (-1);

	*n = (*n & ~change) | ((0 << index) & change);
	return (1);
}
