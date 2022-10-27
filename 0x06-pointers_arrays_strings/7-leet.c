#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: input
 * Return - the value of n
 */
char *leet(char *n)
{
	int a, b;

	char s1[] = "aAeEoOtTlL";
	char s3[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == s1[b])
			{
				n[a] = s3[b];
			}
		}
	}
	return (n);
}
