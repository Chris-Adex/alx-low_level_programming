#include "main.h"


/**
*_isalpha - checks for letters either lowercase or uppercase
*@c: input parameter
*
*Return: returns 1 if letter and 0 if otherwise
*/

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
