#include "holberton.h"

/**
 *cap_string-capital
 *Return:char
 *@s:input
 */
char *cap_string(char *s)
{
	char letters[] = {'\t', ' ', '\n', ',', ';', '.',
			  '!', '?', '"', '(', ')', '{', '}'};

	int i;
	int j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0 ; j <= 13; j++)
		{
			if (s[i - 1] == letters[j] || i == 0)
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
		}
	}

	return (s);
}
