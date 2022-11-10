#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: string lenght
 * Return: concatnated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int lenght = n;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		lenght++;

	concat = malloc((lenght + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	lenght = 0;

	for (i = 0; s1[i]; i++)
		concat[lenght++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concat[lenght++] = s2[i];

	concat[lenght] = '\0';

	return (concat);
}


