#include "main.h"

/**
 * _isalpha - Entry point
 * @c: check
 *
 * Return: 1 if true, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
