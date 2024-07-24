#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: element of first index
 * or -1 (if size <= 0 and no element matches)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
