#include<stdio.h>

/**
 *main-variable sizes
 *Return:0
 */
int main(void)
{
	int intSize;
	char charSize;
	float floatSize;
	long longSize;
	long long llSize;

	printf("Size of a char: %ld byte(s)" sizeof(charSize));
	printf("Size of an int: %ld byte(s)" sizeof(intSize));
	printf("Size of a long int: %ld (s)" sizeof(longSize));
	printf("Size of a long long int: %ld (s)" sizeof(llSize));
	printf("Size of a float: %ld (s)" sizeof(floatSize));

	return (0);
}
