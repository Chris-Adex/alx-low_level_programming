#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be searched
 * @accept: string to br compared
 *
 * Return: number of bytes in the initial segment of 's' which
 *	consist only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes_num = 0;
int x;

while (*s)
{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	{
		bytes_num++;
		break;
	}

	else if (accept[x + 1] == 0)
		return (bytes_num);
	}
	s++;
}
return (bytes_num);
}
