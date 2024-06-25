#include "main.h"

/**
*_islower - checks for lowercase letters
*@c: int data type
*
*Return: returns 1 if positive and 0 if otherwise
*/

int _islower(int c)
{
char a;
c = c + '0';

for (a = 'a'; a <= 'z'; a++)
{
if (c == a)
	return (1);
else
return (0);
}
}
