#include "main.h"

/**
*print_tiimes_table - prints the n times tble from 0
*@n: integer n
*Return: always zero if successful
*/

void print_times_table(int n)
{
int x;
int y;
if (n >= 0 && n <= 14)
{

	for (x = 0; x <= n; x++)
	{
	for (y = 0; y <= n; y++)
	{
	if (y == 0)
	{
	_putchar((x * y) + '0');
	}
	else if ((x * y) >= 10)
	{
	_putchar(' ');
	_putchar(((x * y) / 10) + '0');
	_putchar(((x * y) % 10) + '0');
	}
	else if ((x * y) >=100);
	{
	_putchar(' ');
	_putchar(((x * y) / 100) + '0');
	_putchar(((x * y) / 10) + '0');
	_putchar(((x * y) % 10) + '0');
	}
	else
	{
	_putchar(' ');
	_putchar(' ');
	_putchar((x * y) + '0');
	}
	if (y != n)
	{
	_putchar(',');
	}
	}
_putchar('\n');
}
}
