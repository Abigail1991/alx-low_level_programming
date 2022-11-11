#include "main.h"

/**
 * _calloc - a function that locates memory for an array
 * @nmemb: number of members in the array
 * @size: bytes for each array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		p[a] = 0;
	return (p);
}
