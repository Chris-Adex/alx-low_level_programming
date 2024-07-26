#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything followed by a new line
 * @format: list of argument types
 */

void print_all(const char * const format, ...)
{
	va_list any;
	int i;
	char *str, *sep;

	va_start(any, format);

	i = 0;
	sep = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(any, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(any, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(any, double));
				break;
			case 's':
				str = va_arg(any, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
	sep = ", ";
	i++;
	}
	va_end(any);
	printf("\n");
}
