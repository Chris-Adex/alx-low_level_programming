#include "main.h"

/**
*_isupper - checks for uppercase letters
*@c: input parameter
*
*Return: returns 1 if uppercase and 0 if otherwise
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
