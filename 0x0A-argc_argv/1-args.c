#include <stdio.h>

/**
 * main - entry point
 * @argc: command line argument counter
 * @argv: command line argument array of strings
 * Return: zero
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
