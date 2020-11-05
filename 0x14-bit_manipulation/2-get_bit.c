#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *get_bit-returns bit at a givn index of n
 *Return: 0/1, -1 if error
 *@n:input
 *@index:given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;
	return (bit);
}
