#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *string_nconcat-nconcat
 *Return:char
 *@s1:string 1
 *@s2:string 2
 *@n:n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int a = 0;
	unsigned int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(i + n + 1);
	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[a] = *s1;
		s1++;
		a++;
	}
	while (*s2 != '\0' && b < n)
	{
		ptr[a] = *s2;
		s2++;
		a++;
		b++;
	}
	ptr[a] = '\0';
	return (ptr);
}
