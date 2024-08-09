#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at given index
 * @n: pointer to number
 * @index: index
 *
 * Return: 1 if successful or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index >= 62)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
