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
	for (int lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(tolower(lower));
	}

	return (0);
}
