#include "main.h"

/**
 * print_sign - Entry point
 * @n: the number that determines the sign to be printed
 *
 * Return: 1 and positive sign if greater than 0.
 * 0 if aquall to zero.
 * -1 and a negative sign if equal to less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
