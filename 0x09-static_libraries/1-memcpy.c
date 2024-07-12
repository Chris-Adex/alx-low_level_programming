#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area to copy to
 * @src: memeory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
	dest[x] = src[x];
	x++;
}
return (dest);
}
