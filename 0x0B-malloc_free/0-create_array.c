#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char; initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: NULL if size is 0 or allocation fails, ponter to the array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
	return (NULL);
}

array = malloc(sizeof(char) * size);
if (array == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
	array[i] = c;
	free(array);
}
return (array);
}
