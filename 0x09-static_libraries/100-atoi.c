#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string to convert
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int num = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	num *= sign;
	return (num);
}
