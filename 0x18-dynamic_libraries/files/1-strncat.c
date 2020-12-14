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
	int count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i + count] = src[i];

	dest[count + i] = '\0';
	return (dest);
}
