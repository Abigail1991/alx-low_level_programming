#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Returns: array
 */
int *array_range(int min, int max)
{
	int *array, a = 0, b = min;

	if (min > max)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (0);
	while (a <= max - min)
		array[a++] = b++;
	return (array);
}
