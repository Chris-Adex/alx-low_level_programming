#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:string of 0 and 1 chars
 *
 * Return: converted number or 0 - if b is null
 * or 0 - if b contains char other than 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int len, base2;

	if (!b)
		return (0);

	uint = 0;

	for (len = 0; b[len] != 0; len++)
		;

	for (len--, base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			uint += base2;
		}
	}
	return (uint);
}
