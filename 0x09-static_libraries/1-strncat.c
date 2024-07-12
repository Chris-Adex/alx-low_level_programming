#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be added to
 * @src: string to be added to @dest
 * @n: number of bytes from src to be added to @dest
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, l = 0;

while (dest[i++])
{
l++;
}

for (i = 0; src[i] && i < n; i++)
{
dest[l++] = src[i];
}

return (dest);
}
