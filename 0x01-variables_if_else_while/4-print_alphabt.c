#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: tolowercase but dont print q and e
 *
 * Return: zero
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')

		putchar(lower);
	}

	putchar('\n');

	return (0);
}
