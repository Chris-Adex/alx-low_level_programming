#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: Always 0 (success)
 *
 */

int main(void)
{
int passwd, sum;

srand(time(NULL));
sum = 0;

while (sum <= 2645)
{
	passwd = (rand() % 128);
	sum += passwd;
	printf("%c", passwd);
}
printf("%c", 2772 - sum);

return (0);
}
