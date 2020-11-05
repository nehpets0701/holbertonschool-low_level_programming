#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *set_bit-set given bit to 1
 *Return: 1/-1
 *@n:input
 *@index: given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
