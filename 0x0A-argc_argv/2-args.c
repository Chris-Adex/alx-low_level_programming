#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: array of cmd line argument
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

return (0);
}

