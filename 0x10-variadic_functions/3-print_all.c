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
	int a = 0, b = 0;
	int comma = 1;
	int length = 0;

	va_start(args, format);
	while (format[length] != '\0')
		length++;
	while (a < length)
	{
		comma = 1;
		switch (format[b])
		{
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, int));
			break;
		case 's':
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", va_arg(args, char*));
			break;
		default:
			comma = 0;
		}
		a++;
		b++;
		if (a < length && comma == 1)
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
