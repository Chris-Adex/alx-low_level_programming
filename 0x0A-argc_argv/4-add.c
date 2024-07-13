#include <stdio.h>
#include <stdlib.h>

/**
 * main - rints the addition of positive numbers
 *
 * @argc: argument count
 * @argv: array of arrgument
 *
 * Return: 0 (success), -1 if number contains symbols and non digits
 */

int main(int argc, char *argv[])
{
int num, i;
int add = 0;

for (num = 1; num < argc; num++)
{
	for (i = 0; argv[num][i]; i++)
	{
		if (argv[num][i] < '0' || argv[num][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}

	add += atoi(argv[num]);
}

printf("%d\n", add);

return (0);
}
