#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of cmd line argument
 * Return: 0 (success), 1 (if argv != 3)
 */

int main(int argc, char *argv[])
{
int i, mul;

mul = 1;
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
for (i = 1; i < 3; i++)
{
	mul = mul * atoi(argv[i]);
}
printf("%d\n", mul);
return (0);
}
