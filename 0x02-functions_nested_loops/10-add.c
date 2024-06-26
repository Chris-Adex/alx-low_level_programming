#include "main.h"

/**
* add - adds tow integers
* @x: first integer value
* @y: second integer value
* Return: returns the end result of the addition
*/

int add(int x, int y)
{
if (((x + y) > 9) || ((x + y) < -9))
{
_putchar(((x + y) / 10) + '0');
_putchar(((x + y) % 10) + '0');
}
else
{
_putchar((x + y) + '0');
}
}
