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
	for (char lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
