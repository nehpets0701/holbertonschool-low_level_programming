#include "holberton.h"

/**
 *_isdigit-digit
 *Return: 0/1
 *@c:input
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
