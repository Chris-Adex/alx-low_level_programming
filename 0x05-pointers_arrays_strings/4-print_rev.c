#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s:string to be reversed
 *
 */

void print_rev(char *s)
{
int i;
int n;

i = 0;

for (n = 0; s[n] != 0; n++)
{
}
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
