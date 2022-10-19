#include "main.h"

/**
 * print_times_table - prints a time table
 * @n: value to be printed
 */

void print_times_table(int n)
{
	int number;
	int multiplier;
	int operator;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplier = 1; multiplier <= n; multiplier++)
			{
				_putchar(',');
				_putchar(' ');

				operator = number * multiplier;

				if (operator <= 99)
					_putchar(' ');
				if (operator <= 9)
					_putchar(' ');

				if (operator >= 100)
				{
					_putchar((operator / 100) + '0');
					_putchar((operator / 10) % 10 + '0');
				}
				else if (operator <= 99 && operator >= 10)
				{
					_putchar((operator / 10) + '0');
				}
				_putchar((operator % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
