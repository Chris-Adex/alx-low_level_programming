#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	if (*c)
		return (1);
	return (0);
}
