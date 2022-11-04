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
	int sum = 0;
	int count;
	int dig;

	for (count = 1; count < argc; count++)
	{
		if (argc == 1)
		{
			printf("0");
		}
		for (dig = 0; argv[count][dig]; dig++)
		{
			if (argv[count][dig] < '0' || argv[count][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);
	return (0);
}
