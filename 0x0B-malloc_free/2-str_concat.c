#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat-concat
 *Return:char
 *@s1:input 1
 *@s2:input 2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int a = 0;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] ='\0';

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[a] = *s1;
		s1++;
		a++;
	}
	while (*s2 != '\0')
	{
		ptr[a] = *s2;
		s2++;
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
