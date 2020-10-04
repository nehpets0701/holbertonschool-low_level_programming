#include "holberton.h"

/**
 *rot13-rotate13
 *Return:char
 *@s:input
 */
char *rot13(char *s)
{
	int i;
	int j;

	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; s[i] != 0 ; i++)
	{
		for (j = 0 ; alpha[j] != 0 ; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);
}
