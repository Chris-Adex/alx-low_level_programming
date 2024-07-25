#include <stdio.h>
#include <stdlib.h>

/**
  *main - print opcodes of main function
  *@argc: number of arguments
  *@argv: array of pointers
  *
  *Return: 0 (sucess)
  */

int main(int argc, char *argv[])
{
	int bytes, i;

	i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < bytes)
	{
		printf("%02hhx", *((char *)main + i));
		i++;

		if (i  < (bytes - 1))
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
