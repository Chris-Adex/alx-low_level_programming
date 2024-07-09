#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: matrix of integers.
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int x;
int frst_sum = 0, scnd_sum = 0;

for (x = 0; x < size; x++)
{
	frst_sum += a[x];
	a += size;
}

	a -= size;

for (x = 0; x < size; x++)
{
	scnd_sum += a[x];
	a -= size;
}

printf("%d, %d\n", frst_sum, scnd_sum);
}
