#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
* _putchar - writes character c to stdout
* @a: paramter for function _putchar
*
* Return: returns char
*/

int _putchar(char a)
{
return (write(1, &a, 1));
}


int _putchar(char a);
void print_alphabet(void);




#endif
