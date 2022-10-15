#include <stdio.h>
#include <ctype.h>
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
		char pv = tolower(lower);

		putchar(pv);
	}

	return (0);
}
