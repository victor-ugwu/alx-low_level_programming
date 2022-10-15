#include <stdio.h>
/**
 * main - Entry point
 *
 * putchar: print combination of all double digits
 *
 * Return: zero
 */
int main(void)
{
	int number, number2;

	for (number = 0; number < 10; number++)
	{
		for (number2 = 0; number2 < 10; number2++)
		{
			putchar((number % 10) + '0');
			putchar((number2 % 10) + '0');

			if (number == 9 && number2 == 9)
				continue;

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
