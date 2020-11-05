#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *flip_bits-how many do u flip?
 *Return:number of bits to flip
 *@n:num1
 *@m:num2
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
