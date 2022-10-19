#include "main.h"

/**
 * jack_bauer - entry pointt
 *
 * Description: print every munite of his day
 */

void jack_bauer(void)
{
	int hour;
	int munite;

	for (hour = 0; hour <= 23; hour++)
	{
		for (munite = 0; munite <= 59; munite++)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((munite / 10) + '0');
			_putchar ((munite % 10) + '0');
			_putchar ('\n');
		}
	}
}

