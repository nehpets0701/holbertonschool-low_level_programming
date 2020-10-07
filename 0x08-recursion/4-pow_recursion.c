#include "holberton.h"

/**
 *_pow_recursion-power
 *Return:int
 *@x:base
 *@y:power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (x * _pow_recursion(x, y - 1));
}
