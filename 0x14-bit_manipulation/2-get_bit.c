#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of the bit.
 *
 * Return: value of the bit at index or -1 - if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; x < 64; n >>= 1, x++)
	{
		if (index == x)
			return (n & 1);
	}
	return (-1);
}
