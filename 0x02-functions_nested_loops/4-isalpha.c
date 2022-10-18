#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: the charater
 * Return: 1 if lower or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0)
{
