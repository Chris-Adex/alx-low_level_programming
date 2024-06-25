#ifndef ADE_H
#define ADE_H

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
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);



#endif
