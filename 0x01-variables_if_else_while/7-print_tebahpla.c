#include <stdio.h>

/**
 * main - prints the lowercase alphabets in reverse
 * Return: 0(success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a';)
		putchar(alpha--);
	putchar('\n');
	return (0);
}
