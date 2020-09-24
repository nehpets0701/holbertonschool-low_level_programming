#include "holberton.h"

/**
 *print_square-square
 *Return: 0
 *@size:input
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
