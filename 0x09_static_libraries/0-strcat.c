#include "main.h"

/**
 * _strcat - appends the src string to the dest sstring
 *
 * @dest: A pointer to the string to be concatenated upon
 * @src: string to be appended to @dest
 *
 * Return: a pointer to @dest.
 */

char *_strcat(char *dest, char *src)
{
int i = 0, l = 0;

while (dest[i++])
{
l++;
}

for (i = 0; src[i]; i++)
{
dest[l++] = src[i];
}
return (dest);
}
