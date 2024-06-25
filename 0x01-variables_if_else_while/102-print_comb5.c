#include <stdio.h>

/**
 * main - entry point
 * Return: Always return (0)
 */

int main(void)
{
int a;
int b;

for (a = 0; a <= 98; a++)
{
	for (b = a + 1; b <= 99; b++)
	{
		putchar((a / 10) + '0');
		putchar(a + '0');
		putchar(' ');
		putchar((b / 10) + '0');
		putchar(b + '0');

		if (a <= 98)
		{
		putchar(',');
		putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
