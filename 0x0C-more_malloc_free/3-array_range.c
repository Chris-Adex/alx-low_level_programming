#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers ordered from min to max
 * @min: first value
 * @max: last value
 *
 * Return: NULL (if min > max or malloc fails)
 *         a pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
{
	return (NULL);
}

size = max - min + 1;

arr = malloc(sizeof(int) * size);

if (arr == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	*(arr + i) = min + i;
}

return (arr);
}
