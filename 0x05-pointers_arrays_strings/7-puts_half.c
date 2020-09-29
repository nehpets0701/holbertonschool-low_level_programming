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

	n = length;

	if (n % 2 != 0)
	{
		n--;
	}

	for (a = 0 ; a < length ; a++)
	{
		if (a >= n / 2)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
