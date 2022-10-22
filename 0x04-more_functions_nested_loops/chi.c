#include <stdio.h>

int main (void)
{
	int len;
	int n = 10;
	for (len = 0; len <= n; len++)
		if (n > 0)
			putchar('_');
	putchar('\n');
}
