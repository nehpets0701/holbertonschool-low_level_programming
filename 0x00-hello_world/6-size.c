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

	printf("Size of a char: %ld byte(s)\n", sizeof(charSize));
	printf("Size of an int: %ld byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %ld (s)\n", sizeof(longSize));
	printf("Size of a long long int: %ld (s)\n", sizeof(llSize));
	printf("Size of a float: %ld (s)\n", sizeof(floatSize));

	return (0);
}
