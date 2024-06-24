#include <stdio.h>

/**
 * main - entry point
 * Return: Always return (0)
 */

int main(void)
{
int a;
int b;
int c;

for (a = 0; a <= 7; a++)
{
	for (b = a + 1; b <= 8; b++)
	{
		for (c = b + 1; c <= 9; c++)
		{
		putchar(a + '0');
		putchar(b + '0');
		putchar(c + '0');
		if (a <= 6)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
}
putchar('\n');
return (0);
}
