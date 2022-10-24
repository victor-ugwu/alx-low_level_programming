#include "main.h"

/**
 * puts2 - entry point
 * @str: prints string
 */

void puts2(char *str)
{
	int lenght = 0;
	int i = 0;

	while (str[i++])
		lenght++;

	for (i = 0 - 1; i < lenght; += 2)
		_putchar(str[i]);

	_putchar('\n');
}
