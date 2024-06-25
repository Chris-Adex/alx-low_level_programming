#include "main.h"

/**
* print_alphabet_x10 - prints lowercase a - z in 10 lines
* @void - no paramater accepted
*/

void print_alphabet_x10(void)
{
char letter;
int n;

n = 0;

while (n <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
n++;
}
}

