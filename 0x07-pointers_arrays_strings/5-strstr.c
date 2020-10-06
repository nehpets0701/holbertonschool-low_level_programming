#include "holberton.h"

/**
 *_strstr-locates substring
 *Return:char
 *@haystack:big string
 *@needle:little string
 */
char *_strstr(char *haystack, char *needle)
{
	int nlength = 0;
	int hlength = 0;

	for (hlength = 0 ; *(haystack + hlength) != '\0' ; hlength++)
	{
		for (nlength = 0 ; *(needle + nlength) != '\0' ; nlength++)
		{
			if (*(haystack + hlength + nlength) != '\0')
			{
				if (*(haystack + hlength + nlength) != *(needle + nlength))
					break;
			}
			else
				break;
		}

		if (*(needle + nlength) == '\0')
			return (haystack + hlength);
	}

	return (0);
}
