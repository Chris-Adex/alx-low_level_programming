#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints max num of coin for change
 *
 * @args: parameter
 * @argv: array of numbers
 *
 * Return: 0 (if successful)
 */

int main(int args, char *argv[])
{
int  cents, coins = 0;

if (args != 2)
{
	printf("Error\n");
	return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
	printf("0\n");
	return (0);
}
for (; cents >= 0;)
{
	if (cents >= 25)
		cents -= 25;
		else if (cents >= 10)
		cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
