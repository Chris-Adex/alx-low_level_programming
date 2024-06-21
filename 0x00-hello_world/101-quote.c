#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - main function
 * Return: 1
*/

int main(void)
{
const char *word;
size_t l;
word = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
l = strlen(word);

write(2, word, l);
return (1);
}
