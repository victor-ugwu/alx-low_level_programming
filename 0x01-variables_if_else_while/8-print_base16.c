#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: base sixteen numbers in lowercase
 *
 * Return: zero
 */
int main(void)
{
	int number;
	char lower;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
