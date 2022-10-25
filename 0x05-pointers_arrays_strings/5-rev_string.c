#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int j;
	int c;
	char rev = s[0];

	while (s[c] != '\0')
		c++;
	for (j = 0; j < c; j++)
	{
		c--;
		rev = s[j];
		s[j] = s[c];
		s[c] = rev;
	}
}
