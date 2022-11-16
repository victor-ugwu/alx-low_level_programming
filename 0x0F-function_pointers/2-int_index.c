#include "function_pointers.h"

/**
 * int_index - iterates over an array and searches for integer
 * @array: array to be iterated over
 * @size: size of the array
 * @cmp: a pointer to the function
 * Return: return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
