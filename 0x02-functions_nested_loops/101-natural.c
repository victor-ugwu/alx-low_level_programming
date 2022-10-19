#include <stdio.h>

/**
 * main - total of all numbers that can
 * be multiplied with 3 and 5 and is below 1024
 *
 * Return: zero
 */

int main(void)
{
	int iterator;
	int total;

	for (iterator = 0; iterator < 1024; iterator++)
	{
		if ((iterator % 3) == 0 || (iterator % 5) == 0)
			total += iterator;
	}

	printf("%d\n", total);

	return (0);
}
