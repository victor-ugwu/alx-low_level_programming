#include "main.h"

/**
 * times_table - entry point
 *
 * Description: outputs the multiplication table of 9
 */
void times_table(void)
{
	int number;
	int multiplier;
	int operator;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			operator = number * multiplier;

			if (operator <= 9)
				_putchar(' ');
			else
				_putchar((operator / 10) + '0');

			_putchar((operator % 10) + '0');
		}
		_putchar('\n');
	}
}
