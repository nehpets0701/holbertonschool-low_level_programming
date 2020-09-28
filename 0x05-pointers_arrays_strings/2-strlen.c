#include "holberton.h"

/**
 *_strlen-length
 *Return:length
 *@s:input
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count ++;
		s ++;
	}

	return count;
}
