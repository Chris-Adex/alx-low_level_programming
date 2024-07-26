#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be passed between strings
 * @n: number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	i = 0;

	while (i < n)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	i++;
	}
	va_end(strings);

	printf("\n");
}

