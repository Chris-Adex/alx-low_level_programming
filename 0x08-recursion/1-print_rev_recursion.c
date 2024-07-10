#include "main.h"

/**
 * _print_rev_recursion- prints reversed string
 *@s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(s + 1);
_putchar(*s);
}
