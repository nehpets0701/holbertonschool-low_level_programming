#include "holberton.h"

/**
*_islower-lower
*Return:0/1
*@c:input
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
