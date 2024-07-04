#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @s: string to be encoded
 *
 * Return: encoded result
 */

char *leet(char *s)
{
int x, y;

char *a = "aAeEoOtTlL";
char *n = "4433007711";

for (x = 0; s[x] != 0; x++)
{
	for (y = 0; y <= 9; y++)
	{
		if (s[x] == a[y])
		{
			s[x] = n[y];
		}
	}
}

return (s);
}
