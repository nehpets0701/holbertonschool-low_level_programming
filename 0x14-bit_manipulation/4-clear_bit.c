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
	if (index > 63)
		return (-1);

	*n = *n ^ 0 << index;
	return (1);
}
