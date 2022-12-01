#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endia = (char *)&num;

	if (*endia == 1)
		return (1);
	return (0);
}
