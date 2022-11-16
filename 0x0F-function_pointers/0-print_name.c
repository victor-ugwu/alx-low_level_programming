#include "function_pointers.h"

/**
 * print_name - print name
 * @name: printed name
 * @f: this points to the function thats prints name
 * Return: null if name and f is == to null
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
