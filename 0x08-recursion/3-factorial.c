#include "holberton.h"

/**
 *factorial-factorial
 *Return:int
 *@n:input
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
