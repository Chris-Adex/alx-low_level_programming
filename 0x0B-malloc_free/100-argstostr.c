#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of this program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
size_t len_sum, pos, len;
int i;
char *str;

if (ac == 0 || av == NULL)
{
	return (NULL);
}

len_sum = 0;
for (i = 0; i < ac; i++)
{
	len_sum += strlen(av[i]) + 1;
}

str = malloc((len_sum + 1) * sizeof(char));
if (str == NULL)
{
	return (NULL);
}

pos = 0;
for (i = 0; i < ac; i++)
{
	len = strlen(av[i]);
	memcpy(str + pos, av[i], len);
	pos += len;
	str[pos++] = '\n';
}

str[pos] = '\0';

return (str);
}

