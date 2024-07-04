#include "main.h"

/**
 * _strncpy - copies a string and works exactly like strncpy
 *
 * @dest: string to be copied to
 * @src: string to be copied from
 * @n: number of bytes to copied from @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int len = 0;

while (src[i++])
{
len++;
}

for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}

for (i = len; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
