#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previsouly allocated memmory
 * @old_size: byte size of the allocated memory for ptr
 * @new_size: new byte size of the new memory block
 *
 * Return: pointer to the new allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p, char *ptrcpy;
unsigned int i;

if (new_size == old_size)
{
	return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL)
{
	return (malloc(new_size));
}

p = malloc(new_size);

if (p == NULL)
{
	return (NULL);
}

ptrcpy = ptr;

if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
	p[i] = ptrcpy[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
	p[i] = ptrcpy[i];
}

free(ptr);
return (p);
}
