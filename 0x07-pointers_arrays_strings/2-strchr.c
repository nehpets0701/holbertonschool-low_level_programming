#include "holberton.h"

/**
 *_strchr-locate char
 *Return:char
 *@s:input string
 *@c: char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}

		i++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
