#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * contain all the values from min (included) to max (included), ordered from
 * min to max
 * @min: first value
 * @max: last value
 * Return: null if function fails or min > max. if not it returns a pointer to
 * the new array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
