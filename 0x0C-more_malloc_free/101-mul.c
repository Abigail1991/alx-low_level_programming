#include "main.h"

/**
 * main - multiply two positive numbers
 * @argv: arguments
 * @argc: n aruguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	unsigned long int mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * (atoi(argv[2]));
		printf("%lu\n", mul);
	return (0);
}
