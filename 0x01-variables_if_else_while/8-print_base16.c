#include <stdio.h>

/**
*main-hex
*Return:0
*/
int main(void)
{
	char ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
	}

	for (ch = 97 ; ch <= 102 ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
