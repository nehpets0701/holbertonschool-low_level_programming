#include "holberton.h"

/**
 *string_toupper-toupper
 *Return:char
 *@s:input
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; *s != '\0' ; i++)
	{
		if (s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
