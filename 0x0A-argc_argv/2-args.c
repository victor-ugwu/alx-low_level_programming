#include <stdio.h>

/**
 * main - entry point
 * @argc: command line argument counter
 * @argv: command line argument array of strings
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
