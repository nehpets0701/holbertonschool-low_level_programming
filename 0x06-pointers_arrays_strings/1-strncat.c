#include "holberton.h"

/**
 *_strncat-cat
 *Return:char
 *@dest:input
 *@src:input
 *@n:input
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (*dest != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i]  = '\0';
	return (dest);
}
