#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - chooses the right operation
 * @s: the operator selected
 * Return: points to the function that marches the selected operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t array[] = {
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (array[i].op != NULL && *(array[i].op) != *s)
		i++;

	return (array[i].f);
}

