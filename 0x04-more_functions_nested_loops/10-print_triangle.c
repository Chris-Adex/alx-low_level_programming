#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size : int number
 */

void print_triangle(int size)
{
int x = 1;
int y;

while (x <= size && size > 0)
{
	y = 0;
	while (y < size - i)
	{
		_putchar(' ');
		y++;
	}
	y = 0;
	while (y < i)
	{
		_putchar('#');
		y++;
	}

	_putchar('\n');
	x++;
}
if (x == 1)
{
_putchar('\n');
}
}
