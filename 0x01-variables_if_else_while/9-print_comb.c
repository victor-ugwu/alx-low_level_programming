#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: print combination of all single digits
 *
 * Return: zero
 */
int main(void)
{
	int number;

	for (number = 0; number == 9; number++)
	{
		putchar((number % 10) + '0');

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
