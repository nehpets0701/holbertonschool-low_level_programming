#include "holberton.h"

/**
 *swap_int-swap
 *Return:0
 *@a:input
 *@b:input
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
