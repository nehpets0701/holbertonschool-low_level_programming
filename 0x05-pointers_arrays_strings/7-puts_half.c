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
	int n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		n = (length + 1) / 2;
	}
	else
	{
		n = length / 2;
	}

	for (a = 0 ; a < length ; a++)
	{
		if (a >= n)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
