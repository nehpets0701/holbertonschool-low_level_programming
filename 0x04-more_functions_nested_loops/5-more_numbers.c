#include "holberton.h"

/**
 *print_most_numbers-no24
 *Return: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 14 ; i++)
	{
		_putchar(i % 10 + '0');
		if (i > 9)
			_putchar(i / 10 + '0');
	}
	_putchar('\n');
}
