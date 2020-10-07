#include "holberton.h"

/**
 *_print_rev_recursion-rev
 *Return:0
 *@s:input
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
