#include "holberton.h"

/**
 *print_rev-reverse
 *Return:0
 *@s:input
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count > 0)
	{
		count--;
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
