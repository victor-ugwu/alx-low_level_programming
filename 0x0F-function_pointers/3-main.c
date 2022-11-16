#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - outputs the outcome of simple operations
 * @argc: number of arguments supplied to the program
 * from the command line
 * @argv: array that contains all argument supplied to the program
 * Return: zer0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op;
	int number1;
	int number2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	number1 = atoi(argv[1]);
	op = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && number2 == 0) || (*op == '%' && number2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(number1, number2));

	return (0);
}
