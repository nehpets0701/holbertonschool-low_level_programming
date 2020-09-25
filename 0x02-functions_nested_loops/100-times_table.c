#include "holberton.h"

int print_something(int num)
{
	int i, j;

	for (i = 0; i < num + 1; i++)
	{
		for (j = 0; j < num + 1; j++)
		{
			if (i * j < 10)
				_putchar(i * j);
			if (i * j >= 10 && i * j < 100)
			{
				_putchar((i * j) / 10);
				_putchar((i * j) % 10);
			}
			if (i * j >= 100)
			{
				_putchar((i * j) / 100);
				_putchar((i * j) / 10);
				_putchar((i * j) % 10);
			}
			if (j < num)
			{
				_putchar(', ');
			}
		}
		_putchar('\n');
	}
}
