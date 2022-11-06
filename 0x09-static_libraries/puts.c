#include "main.h"

/**
 * _puts - entry point
 * @s: operator
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');

}
