#include <stdio.h>
#include "holberton.h"

/**
 *print_array-array
 *Return:0
 *@a:input
 *@n:input
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index == n - 1)
		{
			printf("%d, ", a[index]);
			index++;
		}
		else
		{
			printf("%d", a[index]);
			index++;
		}
	}

	printf("\n");
}
