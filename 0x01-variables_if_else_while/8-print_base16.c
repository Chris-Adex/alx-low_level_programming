#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (n = 0; n <= 5; n++)
		putchar(n + 'a');
	putchar('\n');
	return (0);
}
