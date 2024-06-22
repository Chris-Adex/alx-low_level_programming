#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0(success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
