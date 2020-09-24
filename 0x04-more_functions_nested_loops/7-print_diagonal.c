#include "holberton.h"

/**
 *print-diagonal-diagonal
 *Retrun: 0
 *@n:input
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n ; i++)
		{
			_putchar('\\');
			_putchar(' ');
		}
	}
}
