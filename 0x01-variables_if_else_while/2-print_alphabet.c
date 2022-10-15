#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: tolowercase
 *
 * Return: zero
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
