#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of cmd line argument
 * Return: 0 (success), 1 (if argv != 3)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul;
	int num1 = atoi(argv[i]);
	int num2 = atoi(argv[i + 1]);

	if (argc >= 3)
	{
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
