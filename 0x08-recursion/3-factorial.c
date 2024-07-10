#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: any integer
 *
 * Return: returns -1 if n < 0
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
