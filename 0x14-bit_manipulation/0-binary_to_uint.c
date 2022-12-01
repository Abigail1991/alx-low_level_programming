#include "main.h"

/**
 * binary_to_uint - funct that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converting number of NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_v = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_v = 2 * dec_v + (b[a] - '0');
	}
	return (dec_v);
}
