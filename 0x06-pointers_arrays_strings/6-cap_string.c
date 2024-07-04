#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: str (capitalized)
 */

char *cap_string(char *str)
{
int i;
int c;
int set;
char sep[] = ",;.!?(){}\n\t\" ";

for (i = 0, set = 0; str[i] != 0; i++)
{
	if (str[0] >= 95 && str[0] <= 122)
		set = 1;
	for (c = 0; sep[c] != 0; c++)
	{
		if (sep[c] == str[i])
			set = 1;
	}

	if (set)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			set = 0;
		}
		else if (str[i] > 64 && str[i] < 91)
		{
			set = 0;
		}
		else if (str[i] > 47 && str[i] < 58)
		{
			set = 0;
		}
	}
}
return (str);
}
