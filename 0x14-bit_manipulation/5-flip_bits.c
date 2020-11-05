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
	int a = n ^ m;

	while (a > 0)
	{
		count++;
		a &= (a - 1);
	}
	return (count);
}
