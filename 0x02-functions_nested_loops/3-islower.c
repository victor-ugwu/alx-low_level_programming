#include "main.h"

/**
 * _islower - Entry point
 * @c: character to be checked
 *
 * Description: check for lower characters
 *
 * Return: 1 if true, else zero
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
