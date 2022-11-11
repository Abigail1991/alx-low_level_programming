#include "main.h"

/**
 * malloc_checked - a function that allocates memory strings
 * @b: number of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *o;

	o = malloc(b);
	if (o == NULL)
	{
		exit(98);
	}
	return (o);
}
