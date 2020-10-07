#include "holberton.h"

/**
 *_puts_recursion-puts
 *Return:0
 *@s:input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
