#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *switchCases-extra function
 *Return:0
 *@a:a
 *@comma:comma
 *@length:length
 */
void switchCases(int a, int comma, int length, va_list args, const char *format)
{
	while (a < length)
	{
		if (a != 0 && comma == 1)
			printf(", ");
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
			switch (va_arg(argc, char*));
			{
			case NULL:
				printf("ERROR");
			default:
				printf("%p", s);
				break;
			}
			printf("%s", s);
			break;
		default:
			comma = 0;
			a++;
			continue;
		}
		comma = 1;
		a++;
	}
}

/**
 *print_all-print
 *Return:0
 *@format:format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, comma = 1, length = 0;

	va_start(args, format);
	if (format == NULL)
		printf("NULL");
	while (format[length] != '\0')
		length++;
	switchCases(a, comma, length, args, format);

	printf("\n");
	va_end(args);
}
