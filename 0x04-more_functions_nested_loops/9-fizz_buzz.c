#include <stdio.h>

/**
 *main-fizz
 *Return: 0
 */
int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (num % 5 != 0 && num % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else
		{
			printf("%d", num);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
