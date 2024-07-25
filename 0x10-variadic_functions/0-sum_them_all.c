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
	va_list param;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(param, n);

	sum = 0, i = 0;

	while (i < n)
	{
		sum += va_arg(param, int);
		i++;
	}
	va_end(param);

	return (sum);
}

