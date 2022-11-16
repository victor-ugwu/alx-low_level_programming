#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: first number
 * @b: second number
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: a multiply b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - outputs the result of a/b
 * @a: first number
 * @b: second number
 * Return: a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - outputs the remainder of a divided by b
 * @a: first number
 * @b: second number
 * Return: return remainder of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
