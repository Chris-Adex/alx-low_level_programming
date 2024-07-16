#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the newly allocated space in memory
 *         which contains s1 and s2 respectively. NULL if memory
 *         allocation fails
 */

char *str_concat(char *s1, char *s2)
{
size_t len1, len2, lenS;
char *s;

if (s1 == NULL && s2 == NULL)
{
	return (NULL);
}

if (s1 == NULL)
{
	s1 = "";
}

if (s2 == NULL)
{
	s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
lenS = len1 + len2 + 1;

s = malloc(sizeof(char) * lenS);

if (s == NULL)
{
	return (NULL);
}

strcpy(s, s1);
strcat(s, s2);

return (s);
}
