#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar:lowercase alphabet in reverse
 *
 * Return: zero
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
