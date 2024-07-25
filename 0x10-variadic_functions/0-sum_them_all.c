#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: number of parameters to be added
 *
 * Return: 0 (if n == 0) or sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	va_list param;

	va_start(param, n);

	int sum, i;

	sum = 0, i = 0;

	while (i < n)
	{
		sum += va_args(param, int);
	}
	i++;
	va_end(param);

	return (sum);
}

