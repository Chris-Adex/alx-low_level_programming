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

int mul;
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);

if (argc != 3)
{
	printf("Error\n");
	return (1);
}

mul = num1 * num2;

printf("%d\n", mul);
return (0);
}
