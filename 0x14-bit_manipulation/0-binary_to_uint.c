#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *binary_to_uint-btou
 *Return:converted number
 *@b:input binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, decimal = 0;
	int length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
	length--;

	while (length >= 0)
	{
		if (b[length] == '1')
			decimal += base;
		base *= 2;
		length--;
	}
	return (decimal);
}
