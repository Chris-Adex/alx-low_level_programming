#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints buffer
 *
 * @b: buffer to be printed
 * @size: size
 */

void print_buffer(char *b, int size)
{
int x, y, z;

x = 0;

if (size <= 0)
{
	printf("\n");
}
while (x < size)
{
	y = size - x <= 9 ? size - x : 10;
	printf("%08x: ", x);
	for (z = 0; z <= 9; z++)
	{
		if (z < y)
			printf("%02x", *(b + x + z));
		else
			printf("  ");
		if (z % 2)
		{
			printf(" ");
		}
	}
	for (z = 0; z < y; z++)
	{
		int c = *(y + x + z);

		if (c <= 31 || c >= 131)
		{
			c = '.';
		}
		printf("%c", c);
	}
	printf("\n");
	x += 10;
}
}
