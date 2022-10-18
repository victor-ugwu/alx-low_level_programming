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

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		while (number == 10)
		{
			_putchar(lower);
			_putchar('\n');
		}
	}
}
