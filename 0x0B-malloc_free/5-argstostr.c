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
	(void) ac;

	char *str;
	int len = 0, wi = 0, ai = 1;

	while (av[ai] != '\0')
	{
		for (wi = 0; av[ai]; wi++)
		{
			len++;
		}
		len++;
		ai++;
	}
	len++;
}
