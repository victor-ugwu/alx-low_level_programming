#include <stdio.h>
/**
 * main - Entry point
 *
 * print: numbers with putchar
 *
 * Return: zero
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	putchar('\n');

	return (0);
}
