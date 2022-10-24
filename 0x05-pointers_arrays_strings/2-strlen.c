#include "main.h"

/**
 * _strlen - entry point
 * @s: gets the lenght of the string
 * Return: Lenght.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
