#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *print_all-print
 *Return:0
 *@format:format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, comma = 1, length = 0;
	char *s;

	va_start(args, format);
	while (format[length] != '\0')
		length++;
	while (a < length)
	{
		switch (format[a])
		{
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("%p", s);
				break;
			}
			printf("%s", s);
			break;
		default:
			comma = 0;
			break;
		}
		if (a < length - 1 && comma == 1)
			printf(", ");
		comma = 1;
		a++;
	}
	printf("\n");
	va_end(args);
}
