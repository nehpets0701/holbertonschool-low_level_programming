#include "holberton.h"

/**
 *puts_half-half
 *Return:0
 *@str:input
 */
void puts_half(char *str)
{
	int length = 0;
	int a;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		length--;
	}

	for (a = 0 ; a <= length ; a++)
	{
		if (a >= length / 2)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
