#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints result of operation
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *sign;


	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num1 = atoi(argv[1]);
	sign = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(sign) == NULL || sign[1] != 0)
	{
	printf("Error\n");
	exit(99);
	}

	if ((*sign == '/' || *sign == '%') && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}

	result = get_op_func(sign)(num1, num2);
	printf("%d\n", result);

	return (0);
}
