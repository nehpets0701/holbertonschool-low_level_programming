#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_strings-print
 *Return:0
 *@separator:separator
 *@n:n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *c;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(args, char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
