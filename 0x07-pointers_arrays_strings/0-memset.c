#include "holberton.h"

/**
 *_memset-fill memory
 *Return:char
 *@s:input
 *@b:input
 *@n:input
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}

	return (s);
}
