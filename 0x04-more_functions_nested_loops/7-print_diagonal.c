#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{
int length;
int gap;

if (n > 0)
{
	for (length = 0; length < n; length++)
	{
		for (gap = 0; gap < length; gap++)
			_putchar(' ');
		_putchar('\\');

		if (length == n - 1)
			continue;

		_putchar('\n');
	}
}

_putchar('\n');
}
