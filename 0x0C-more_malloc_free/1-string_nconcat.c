#include "main.h"

/**
 * string_nconcat - a function that concacenate two strings
 * @s1: string one
 * @s2: string two
 * @n: index
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if ( n > size2)
		n = size2;
	p = malloc ((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);
	for (a = 0; a < size1; a++)
	{
		p[a] = s1[a];
	}
	for (; a < (size1 + n); a++)
	{
		p[a] = s2[a - size1];
	}
	p[a] = '\0';
	return (p);
}
