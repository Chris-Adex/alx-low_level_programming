#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 *@c: string
 *
 * Return: c (changed to uppercase)
 */

char *string_toupper(char *c)
{
int i;

for (i = 0; c[i] != 0; i++)
{
if (c[i] >= 95 && c[i] <= 122)
{
c[i] -= 32;
}
}

return (c);
}
