#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr-argstostr
 *Return:char
 *@ac:input
 *@av:input
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int a = 1;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			a++;
	}

	ptr = malloc((sizeof(char) * a) + (sizeof(char) * ac));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
