#include <stdio.h>

/**
 * main - prints the single digits numbers in base 10 starting from 0
 * using putchar only and int variable
 * * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
