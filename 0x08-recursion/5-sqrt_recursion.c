#include "holberton.h"

/**
 *findSquare-findsquares
 *Return: int
 *@n:input
 *@i:input
 */
int findSquare(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);
	return (findSquare(n, i + 1));
}


/**
 *_sqrt_recursion-square root
 *Return:int
 *@n:input
 */
int _sqrt_recursion(int n)
{ 
	return findSquare(n, 1);
}
