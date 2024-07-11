#include "main.h"

int _sqrt(int num, int root);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: any integer
 * Return: result of the square root
 */

int _sqrt_recursion(int n)
{
int root = 0;

if (n < 0)
	return (-1);
return (_sqrt(n, root));
}


/**
 * _sqrt - finds the square root of a number
 * @num: integer number
 * @root: possible square root
 *
 * Return: square root
 */

int _sqrt(int num, int root)
{
if ((root * root) == num)
	return (root);
if  ((root * root) > num)
	return (-1);
return (_sqrt(num, root + 1));
}
