#include "main.h"

/**
 * swap_int - entry point
 * @a: exchanges value to b
 * @b: exchanges value with a
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
