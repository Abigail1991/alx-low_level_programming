#include "main.h"
#include <limit.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Returns: 0 or if min > mac, return NULL, if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr, a = 0, b = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (a <= max - min)
		arr[a++] = b++;
	return (arr);
}
