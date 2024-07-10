#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
int n;
n = 1;
if (*s)
{
_strlen_recursion(s + 1);
n++;
}
return(n);
}
