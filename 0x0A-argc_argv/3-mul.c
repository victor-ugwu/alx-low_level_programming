#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: command line argument counter
 * @argv: command line argument array of strings
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int argc1 = atoi(argv[1]);
	int argc2 = atoi(argv[2]);
	int multiplier = argc1 * argc2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", multiplier);

	return (0);
}
