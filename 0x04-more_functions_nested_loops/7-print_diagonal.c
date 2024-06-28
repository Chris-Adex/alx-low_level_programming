#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: function parameter
 *
 */

void print_diagonal(int n)
{
int x;

	if (x != 0 || x > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
