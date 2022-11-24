#include <stdio.h>
void _attribute_((constructor)) tortoise(void);

/**
 * tortoise - prints a string before main function
 * 
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
