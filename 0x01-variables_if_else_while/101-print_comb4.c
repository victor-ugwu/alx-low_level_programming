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
	int number;
	int number2;
	int number3;

	for (number = 0; number < 8; number++)
	{
		for (number2 = 1; number2 < 9; number2++)
		{
			for (number3 = 2; number3 < 10; number3++)
			{
				putchar((number % 10) + '0');
				putchar((number2 % 10) + '0');
				putchar((number3 % 10) + '0');

				if (number == 7 && number2 == 8 && number3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');

	return (0);
}
