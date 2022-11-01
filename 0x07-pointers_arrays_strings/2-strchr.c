#include "main.h"

/**
 * _strchr - a funtion that locates character in a string
 * @c: character
 * @s: string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
		s += b;
		return (s);
	}
	return ('\0');
}
