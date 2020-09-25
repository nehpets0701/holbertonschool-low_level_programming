#include "holberton.h"

/**
 *print_diagonal-diagonal
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
		int size = n;
		int i, j, l = 0;

		for (i = 0; i < size; i++)
		{
			for (j = size + 1; j <= size + l; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			l++;
		}
	}
}
