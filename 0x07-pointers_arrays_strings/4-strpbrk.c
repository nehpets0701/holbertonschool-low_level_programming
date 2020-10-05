#include "holberton.h"

/**
 *_strpbrk-search string for set of bytes
 *Return:char
 *@s:string
 *@accept:substring
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
		j = 0;
	}

	if (accept == '\0')
	{
		return (s + i);
	}

	return (0);
}
