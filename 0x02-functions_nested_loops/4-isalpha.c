#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: the character
 * Return: 1 if lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
