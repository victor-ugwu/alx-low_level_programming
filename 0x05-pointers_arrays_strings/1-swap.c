#include "main.h"

/**
 * swap_int - entry point
 * @a: exchanges value to b
 * @b: exchanges value with a
 */

void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}
