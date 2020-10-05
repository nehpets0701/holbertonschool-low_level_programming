#include "holberton.h"

/**
 *print_chessboard-printchessboard
 *Return:0
 *@a:input
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			_putchar(*a[i]);
		}
	}
}
