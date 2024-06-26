#include <stdio.h>

/**
 * main - computes even fibonnaci numbers < 4,000,000
 * Return: Alwyas 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int n = 0;
	int sum = 0;

	while (n < 4000000)
	{
		n = a + b;
		a = b;
		b = n;
		if (n % 2 == 0)
			sum += n;
	}
	printf("%i\n", sum);
	return (0);
}
