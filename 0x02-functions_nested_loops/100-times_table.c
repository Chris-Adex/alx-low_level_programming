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
		_putchar('0');

		for (y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');

			if ((x * y) <= 99)
				_putchar(' ');
			if ((x * y) <= 9)
				_putchar(' ');

			if ((x * y) >= 100)
			{
				_putchar((((x * y)) / 100) + '0');
				_putchar((((x * y) / 10)) % 10 + '0');
			}
			else if ((x * y) <= 99 && (x * y) >= 10)
			{
				_putchar(((x * y) / 10) + '0');
			}
				_putchar(((x * y) % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
