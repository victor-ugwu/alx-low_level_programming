#include "main.h"

/**
 * rev_string - entry point
 * @s: print string in reverse
 */

void rev_string(char *s)
{
	int lenght = 0;
	int i = 0;
	char value;

	while (s[i++])
		lenght++;

	for (i = lenght - 1; i >= lenght / 2; i--)
	{
		value = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = value;
	}
}
