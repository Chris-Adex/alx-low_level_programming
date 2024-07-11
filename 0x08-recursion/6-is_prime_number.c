#include "main.h"

int prime_num(int num, int f);

/**
 * is_prime_number - checks for prime number
 * @n: integer number
 *
 * Return: 1 if @n is a prime number and 0 if otherwise
*/

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (prime_num(n, 2));
}


/**
 * prime_num - checks for prime num
 * @num: number
 * @f: factor
 *
 * Return: 1 if num is prime and 0 if otherwise
 */

int prime_num(int num, int f)
{
if (f < num)
	if (num % f == 0)
		return (0);
	return (prime_num(num, f + 1));
return (1);
}
