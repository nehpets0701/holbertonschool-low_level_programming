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

	while (s[i] != c && s[i] != '\0')
	{
		i++;

		if (s[i] == c)
		{
			return (s);
		}
	}

	return (0);
}
