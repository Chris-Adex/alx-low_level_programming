#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 under 1024
 * Return: Always 0
 */
int main(void)
{
	int x, y = 0;

	while (x <= 1023)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}

		x++;
	}

	printf("%d\n", y);
	return (0);
}
