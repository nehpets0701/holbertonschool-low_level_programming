#include "holberton.h"

/**
 *_strcat-cat
 *Return:char
 *@dest:input
 *@src:input
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (cat);
}
