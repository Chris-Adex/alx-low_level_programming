#include <unistd.h>
/**
* _putchar - function to print char
* @a: paramter for function _putchar
*
*alternative to putchar
*
* Return: returns char
*/

int _putchar (char a)
{
return (write(1, &a, 1));
}
