#include <stdio.h>

void _attribute_((constructor)) bmain(void);
/**
 * bmain - prints a string before main function
 * Return: no return
 */
void bmain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
