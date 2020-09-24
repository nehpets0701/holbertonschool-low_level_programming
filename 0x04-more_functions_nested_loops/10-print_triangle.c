#include "holberton.h"

/**
 *print_triangle-triangle
 *Return: 0
 *@size:input
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int x;

		for (i = 1 ; i <= size ; i++)
		{
			for (x = i ; x <= size ; x++)
			{
				_putchar(' ');
			}
			for (x = 1 ; x <= i ; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
