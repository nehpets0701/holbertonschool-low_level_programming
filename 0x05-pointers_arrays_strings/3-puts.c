#include "holberton.h"
#include <unistd.h>

/**
 *_puts-putschars
 *Return:0
 *@str:input
 */
void _puts(char *str)
{
      	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
