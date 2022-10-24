#include "main.h"

/**
 * puts_half - entry point
 * @str: print half of the string
 */

void puts_half(char *str)
{
	int lenght = 0;
	int i = 0;
	int half;

	while (str[i++])
		lenght++;
	if ((lenght % 2) == 0)
		half = lenght / 2;
	else
		half = (lenght + 1) / 2;

	for (i = half; i < lenght; i++)

		_putchar(str[i]);

	_putchar('\n');
}
