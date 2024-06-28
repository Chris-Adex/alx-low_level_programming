#include "main.h"

/**
* more_numbers - prints numbers 0 -14 10 times
*
*/

void more_numbers(void)
{
int x;
int n;

n = 0;

while (n <= 9)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
{
_putchar(x / 10);
_putchar(x % 10);
}
_putchar('\n');
n++;
}
}
}
