#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
{
