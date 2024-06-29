#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer with _putchar
 * @n: takes number
 *
 */

void print_number(int n)
{
unsigned int x;

if (n < 0)
{
_putchar('-');
x = -n;
}
else
{
x = n;
}
if (x / 10 != 0)
print_number(x / 10);
_putchar((x % 10) + '0');
}
