#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int k = 0;

	while (k < 10)
	{
		_putchar(k++ + '0');
	}
	_putchar('\n');
}
