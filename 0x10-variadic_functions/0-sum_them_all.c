#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all the numbers passed to the parameter
 * @n: represents the numbers
 * Return: returns 0 if n == 0, otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	unsigned int sum = 0;

	va_start(numbers, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
