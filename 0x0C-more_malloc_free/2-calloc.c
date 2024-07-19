#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: size of each array element in bytes
 *
 * Return: NULL(if nmemb/size is 0, or if malloc fails)
 *         a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}

m = malloc(size * nmemb);

if (m == NULL)
{
	return (NULL);
}

for (i = 0; i < (size * nmemb); i++)
	*((char *)m)[i] = '\0';

return (m);
}
