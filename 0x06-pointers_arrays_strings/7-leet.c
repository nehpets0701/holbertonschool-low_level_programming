#include "holberton.h"

/**
 *leet-replace
 *Return:char
 *@s:input
 */
char *leet(char *s)
{
	char letters[] = {"aeotlAEOTL"};
	char leet[] = {"4307143071"};

	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; letters[j] != '\0' ; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j];
			}
		}
	}

	return (s);
}
