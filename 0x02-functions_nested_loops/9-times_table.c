#include "main.h"

/**
*times_table -prints the 9 times tble from 0
*@void: accepts zero parameters
*Return: always zero if successful
*/

void times_table(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
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
else
{
_putchar(' ');
_putchar(' ');
_putchar((x * y) + '0');
}
if (y != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
