#include <stdio.h>

/**
 *main-alphabt
 *Return:0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q')
		{
			if (ch != 'e')
			{
				putchar(ch);
			}
		}
	}

	putchar('\n');

	return (0);
}
