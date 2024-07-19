#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 *
 * Return: a pointer to the newly allocated memeory which
 *         contains s1, first n bytes of s2 and null terminator.
 *         NULL(if function fails).
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1, len2, lenS;
char *s;

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

if (n < 0)
{
	return (NULL);
}
if (n >= len2)
{
	n = len2;
}

lenS = len1 + n + 1;

s = malloc(sizeof(char) * lenS);

if (s == NULL)
{
	return (NULL);
}

strcpy(s, s1);
strcat(s, s2);

return (s);
}
