#include <stdio.h>

/**
 * b_main - executes before the main function
 */

void __attribute__ ((constructor)) b_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
