#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98-98
 *Return:0
 *@n:input
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	if (n > 98)
	{
		int a;

		for (a = n ; a != 97 ; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
	if (n < 98)
	{
		int b;

		for (b = n ; b != 99 ; b++)
		{
			printf("%d", b);
			if (b != 98)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
}
