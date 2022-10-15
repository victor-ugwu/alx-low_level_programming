#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: tolowercase & UPPERCASE
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

	for (lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
