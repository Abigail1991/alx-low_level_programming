#include "main.h"

/**
 * print_array - a function that print n elements of an integer
 * @n: number of element
 * Return: input
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < n; d++)
	{
		printf("%d", a[d]);
		if (d != n - 1)
			printf(", ");
	}
	printf("\n");
}
