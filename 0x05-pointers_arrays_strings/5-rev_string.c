#include "holberton.h"

/**
 *rev_string-reverse
 *Return:0
 *@s:input
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char tmp;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (i = 0 ; i < length / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[length - i];
		s[length - i] = tmp;
	}
}
