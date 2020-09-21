#include "holberton.h"

/**
 *islower-lower
 *Return:0/1
 */
int _islower(int c)
{
	if (_islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 *main-lower
 *Return:0
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
