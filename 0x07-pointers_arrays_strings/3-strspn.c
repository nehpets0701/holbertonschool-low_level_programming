#include "holberton.h"

/**
 *_strspn-length of substring
 *Return:int bytes
 *@s:string
 *@accept:substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
