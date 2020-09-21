#include "holberton.h"

/**
 *main-alphafunction
 *Return:0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

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
