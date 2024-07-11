#include "main.h"


int _len(char *s);
int is_p(int index, int l, chars *s);

/**
 * _len - checks the length of a string
 * @s:the string
 *
 * Return: return the leng of the string
 */

int _len(char *s)
{
if (*s == 0)
	return (0);
return (1 + _len(s + 1));
}

/**
 * is_p - checks if the string is a palindrome
 * @index: index
 * @l: length of the string
 * @s: the string
 *
 * Return: returns 1 if palindrome or 0 if otherwise
 */

int is_p(int index, int l, char *s)
{
if (l > 0)
{
	if (s[index] == s[l])
		return (is_p(index + 1, l - 1, s));

	else if (s[index] != s[l])
		return (0);
	else
		return (1);
}
return (1);
}


/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string
 *
 * Return: returns 1 if the string is a palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	return (is_p(0, _len(s) - 1, s));
}
