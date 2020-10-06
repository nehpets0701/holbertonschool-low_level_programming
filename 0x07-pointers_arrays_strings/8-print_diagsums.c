#include <stdio.h>
#include "holberton.h"

/**
 *print_diagsums-adds diagonals
 *Return:0
 *@a:input
 *@size:size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0 ; i < size * size ; i =  i + (size + 1))
	{
		sum = sum + a[i];
	}

	printf("%d, ", sum);

	for (i = size - 1, sum = 0 ; i <= size * (size - 1) ; i = i + (size - 1))
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);
}
