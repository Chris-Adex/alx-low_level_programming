#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{
long x, num;

num = 612852475143;
for (x = 2; x < num; x++)
{
while (num % x == 0)
num = num / x;
}

printf("%lu\n", num);

return (0);
}


