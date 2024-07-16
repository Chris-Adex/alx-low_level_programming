#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string and returns the ponter to a new string
 * @str: string to be duplicated
 *
 * Return: a pointer to new string if successful, or NULL if str == NULL
 *         or if memory allocation fails
 */

char *_strdup(char *str)
{
char *dupstr;
size_t len;

if (str == NULL)
{
	return (NULL);
}

len = strlen(str) + 1;
dupstr = malloc(sizeof(char) * len);

if (dupstr == NULL)
{
	return (NULL);
}

strcpy(dupstr, str);
return (dupstr);
}

