#include "holberton.h"

/**
 *_memcpy-copy memory area
 *Return:char
 *@dest:dest
 *@src:src
 *@n:number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
