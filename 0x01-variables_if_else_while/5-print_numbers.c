#include <stdio.h>

/**
 * main - prints the single digits numbers in base 10 starting from 0
 * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9;)
		printf("%d", n++);
	printf("\n");
	return (0);
}
