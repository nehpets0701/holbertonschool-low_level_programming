#include "holberton.h"

/**
 *_abs-absolutevalue
 *Return: number
 *@int:input
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
