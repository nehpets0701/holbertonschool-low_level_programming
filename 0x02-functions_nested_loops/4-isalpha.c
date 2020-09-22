#include "holberton.h"

/**
 *_isalpha-isalpha
 *Return:0/1
 */
int _isalpha(int c)
{
	if (c >= 65 && <= 90)
	{
		return (1);
	}
	if(c >= 97 && <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
