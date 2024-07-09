#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
int x;
int y;

for (x = 0; a[x][7]; x++)
{
	for (y = 0; y < 8; y++)
	{
		_putchar(a[x][y]);
	}
_putchar('\n');
}
}
