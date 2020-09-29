#include "holberton.h"

/**
 *puts2-odd
 *Return:0
 *@str:input
 */
void puts2(char *str)
{
	int length = 0;
	int a;

	while (str[length] != '\0')
	{
		length++;
	}

	for (a = 0 ; a <= length ; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}

	_putchar('\n');
}
