#include "holberton.h"

/**
 *more_numbers-14
 *Return: 0
 *@i:counter
 *@ch:char
 */
void more_numbers(void)
{
	int i;
	int ch;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (ch = 48; ch <= 62 ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
