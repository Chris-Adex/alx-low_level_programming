#include "main.h"

/**
* print_alphabet - function to print lowercase a -z
* @void - no parameters accepted
* Return: always (0)
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z';)
{
_putchar(letter++);
}
_putchar('\n');

}
