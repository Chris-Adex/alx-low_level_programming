#include "main.h"

void _print_rev_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if a true and 0 if not
 */

int is_palindrome(char *s)
{
if (*s == 0)
	return (1);

if (_print_rev_recursion(*s) == *s)
	return (1);
return (0);
}


/**
 * _print_rev_recursion- prints reversed string
 *@s: string to be reversed
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
