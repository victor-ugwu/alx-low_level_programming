#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array of a certain number using malloc
 * @nmemb: size of the array
 * @size: memory size of each element of the array.
 * Return: if the function fails and both nmemb and size are == 0, return null.
 * otherwise return pointer that points to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *memory;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	ptr = memory;

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = '\0';

	return (memory);
}
