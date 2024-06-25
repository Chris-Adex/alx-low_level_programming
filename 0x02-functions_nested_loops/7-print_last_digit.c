#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@x: input number
*Return: returns last digit
*/

int print_last_digit(int x)
{
if (x >= 0)
x = x % 10;
else
x = (x % 10) * -1;
_putchar (x + '0');
return (x);
}
