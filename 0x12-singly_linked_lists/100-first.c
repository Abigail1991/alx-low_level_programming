#include <stdio.h>
void _attribute_((constructor)) hare(void);

/**
 * hare - prints a string before main function
 *
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}