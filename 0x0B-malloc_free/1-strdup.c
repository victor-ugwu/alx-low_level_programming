#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string which is a duplicate of the str
 * ing str
 * @str: string which is duplicated
 * Return: null if str or its copy is = null, else return copy
 */

char *_strdup(char *str)
{
	int i;
	int lenght;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		lenght++;

	copy = malloc((lenght + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[lenght] = '\0';

	return (copy);
}
