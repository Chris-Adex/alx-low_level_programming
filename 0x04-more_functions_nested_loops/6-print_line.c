#include "main.h"

/**
 * print_line - draws a straight line
 * @n: function paramter
 *
 */

void print_line(int n)
{
int x;

for (x = 1; x <= n; x++)
{
_putchar('_');
}
_putchar('\n');
}
