#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	va_start(param, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(param, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	i++;
	}
	va_end(param);

	printf("\n");
}

