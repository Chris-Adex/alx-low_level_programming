#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 * @a: the array input
 * @n: length of array
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%i", a[i]);
	if (i < (n - 1))
	{
		printf(", ");
	}
}
printf("\n");
}
