#include "holbertotn.h"

/**
 *print_most_numbers-no24
 *Return: 0
 *@i:counter
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
