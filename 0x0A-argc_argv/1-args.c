#include <stdio.h>

/**
 * main - funtion that prints the number of args passed
 *
 * @argc: argument count
 * @argv: array of cmd line argument
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);

return (0);
}

