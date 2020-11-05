#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *print_binary-prints decimal in binary
 *Return: void
 *@n:input number
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
