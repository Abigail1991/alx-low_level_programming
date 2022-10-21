#include "main.h"

/**
 * print_most_numbers - print except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	while (c < 0)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
		c++;
	}
	_Putchar('\n');
}

