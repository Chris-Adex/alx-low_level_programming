#include <stdio.h>

/**
 * main - prints all single numbers with space in them
 * Return: 0(success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	if (n <= 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
