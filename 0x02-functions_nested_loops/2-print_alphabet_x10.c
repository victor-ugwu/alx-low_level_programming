#include "main.h"

/**
 * print_alphabet_x10 - output a-z 10x
 *
 * Description:output a-z 10x
 */

void print_alphabet_x10(void)
{
	char lower;
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
			_putchar(lower);
		_putchar('\n');
	}
}
