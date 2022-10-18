#include "main.h"

/**
 * main - prints alphabet in lower cases
 */
void print_alphabet(void);
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);
	_putchar('\n');
}
