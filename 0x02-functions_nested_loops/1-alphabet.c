#include "holberton.h"

/**
 *print_alphabet-alphafunction
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

/**
 *main-alpha
 *Return:0
 */
int main(void)
{
	print_alphabet();

	return (0);
}
