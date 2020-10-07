#include "holberton.h"

/**
 *_sqrt_recursion-square root
 *Return:int
 *@n:input
 */
int _sqrt_recursion(int n)
{ 
	return (n * _sqrt_recursion(n, (1 / 2)));
}
