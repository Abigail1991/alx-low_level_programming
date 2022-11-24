#include <stdio.h>

void bmain(void)__attribute__((constructor));
/**
 * bmain - prints a string before main function
 * Return: no return
 */
void bmain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
