#include "holberton.h"

/**
 *findPrime-prime
 *Return:int
 *@n:input
 *@i:input
 */
int findPrime(int n, int i)
{
	if (i < n / 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	if (i >= n / 2)
		return (1);

	return (findPrime(n, i + 1));
}

/**
 *is_prime_number-prime
 *Return:0/1
 *@n:input
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (findPrime(n, 2));
}
