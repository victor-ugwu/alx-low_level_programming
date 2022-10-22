#include "main.h"

/**
 * _isdigit - print digit
 * @c: counter
 *
 * Return: zero or one
 */

int _isdigit(int c)
{
	int c;

	if (c > '0' && c <= '9')

		return (1);
	else
		return (0);
}
