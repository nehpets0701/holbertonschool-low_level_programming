#include <stdio.h>

/**
 *main-0-99
 *Return:0
 */
int main(void)
{
	int ch1;

	for (ch1 = 0 ; ch1 <= 99 ; ch1++)
	{
		putchar((ch1 / 10) + '0');
		putchar((ch1 % 10) + '0');

		if (ch1 != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
