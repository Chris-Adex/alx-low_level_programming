#include <stdio.h>

/**
 * main - entry point
 * Return: Always return (0)
 */

int main(void)
{
int a;
int b;

for (a = 0; a <= 8; a++)
{
	for (b = a + 1; b <= 9; b++)
	{
	putchar(a + '0');
	putchar(b + '0');

	if (a <= 7 )
	putchar(',');
	putchar(' ');
	}
}

putchar('\n');
return (0);
}
