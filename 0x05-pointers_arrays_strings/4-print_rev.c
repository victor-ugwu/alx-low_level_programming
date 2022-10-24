#include "main.h"

/**
 * print_rev - entry point
 * @s: print string in reverse
 */

void print_rev(char *s)
{
	int lenght = 0, i;

	while (s[i++])
		lenght++;

	for (i = lenght - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
