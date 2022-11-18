#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print a character
 * @arg: character to be printed
 */

void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * print_float - print long numbers
 * @arg: long number to be printed
 */

void print_float(va_list arg)
{
	float long_number;

	long_number = va_arg(arg, double);
	printf("%f", long_number);
}

/**
 * print_int - print numbers
 * @arg: numbers to be printed
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_string - print strings
 * @arg: number of strings to be printed
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 * @format: character s representing argument types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";

	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))

			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;

	}

	printf("\n");

	va_end(args);

}
