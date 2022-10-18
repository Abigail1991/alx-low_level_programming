#include "main.h"

/**
 * print_last_digit - print last digi of a number
 * @m: the number
 * Return: value of last digits
 */
int print_last_digit(int m)
{
	int ld = m % 10;

	if (ld  < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);

}
