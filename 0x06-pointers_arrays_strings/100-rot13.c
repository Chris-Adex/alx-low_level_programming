#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
int a;
int b;

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_key[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != 0; a++)
{
	for (b = 0; alphabet[b] != 0; b++)
	{
		if (s[a] == alphabet[b])
		{
			s[a] = rot13_key[b];
			break;
		}
	}
}

return (s);
}
