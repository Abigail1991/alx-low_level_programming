#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer
 * Return: output
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
	return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pal - palindrome
 * @s: pointer
 * @j: position
 * Return: boolen
 */
int pal(char *s, int j)
{
	if (j < 1)
	{
	return (1);
	}

	if (*s == *(s + j))
	{
	return (pal(s + 1, j - 2));
}
}

/**
 * is_palindrome - palindrom function
 * @s: pointer
 * Return: 1 if pal and 0 if not pal
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	{
	return (pal(s, l - 1));
	}
}
