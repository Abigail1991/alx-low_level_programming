#include "main.h"
#include <string.h>

/**
 * array_range  - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = min;

	arra_range = 0;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
