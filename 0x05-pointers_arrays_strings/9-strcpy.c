#include "holberton.h"

/**
 *_strcpy-add letter
 *Return:0
 *@dest:input
 *@src:input
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
