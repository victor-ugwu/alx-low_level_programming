#include "main.h"
#include <unistd.h>

/**
 * _putchar - outputs c to stdout
 * @c: is the output
 *
 * Return: 1 if successful.
 * If error, return -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
