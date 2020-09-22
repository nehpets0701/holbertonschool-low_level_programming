#include "holberton.h"

/**
 *print_alphabetx10
 */
void print_alphabetx10(void)
{
	char ch;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
