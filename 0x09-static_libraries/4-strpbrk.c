#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: a pointer to the matched byte if set is matched or
 * NULL if set is not matched
 */

char *_strpbrk(char *s, char *accept)
{
int x;

while (*s)
{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
		return (s);
	}

	s++;
}

return (0);
}
