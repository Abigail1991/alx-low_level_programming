#include "main.h"

/**
 * flip_bits - funct that returns e num of bits need to flip 2 ge
 *	frm one num to another
 * @n: bits
 * @m: number to flip
 * Return: number to flip from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int abc = n ^ m, bits = 0;

	while (abc > 0)
	{
		bits += (abc & 1);
		abc >>= 1;
	}
	return (bits);
}
