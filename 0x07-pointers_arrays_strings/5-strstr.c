#include "holberton.h"

/**
 *_strncmp-strncmp
 *Return:int
 *@s1:input
 *@s2:input
 *@n:input
 */
int _strncmp(const char *s1, const char *s2, int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	}
}




/**
 *_strstr-locates substring
 *Return:char
 *@haystack:big string
 *@needle:little string
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0;

	while (needle[length] != '\0')
	{
		length++;
	}

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (!_strncmp(haystack, needle, length))
				return ((char *) haystack);
		}
		haystack++;

		if (needle == '\0')
		{
			return (0);
		}
	}
	return (0);
}
