#include "main.h"

char rev_recursion(char *s);

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

else
if (rev_recursion(s) == *s)
	return (1);
else
return (0);
}


/**
 *rev_recursion- prints reversed string
 *@s: string to be reversed
 * Return: reversed string
 */

char rev_recursion(char *s)
{
if (*s)
{
rev_recursion(s + 1);
}
return (*s);
}
