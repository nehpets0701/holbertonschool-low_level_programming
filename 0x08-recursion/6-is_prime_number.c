#include "holberton.h"

/**
 *is_prime_number-prime
 *Return:0/1
 *@n:input
 */
int is_prime_number(int n)
{
	int i = n / 2;

	if (i == 1)
		return 1;
	else
	{
		if (n % i == 0)
			return (0);
		else
			i--;
		is_prime_number(n);
	}

	return (0);
}
