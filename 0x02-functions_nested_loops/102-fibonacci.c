#include <stdio.h>

/**
 *main-main
 *Return:0
 */
int main(void)
{
	long int i;
	long int a = 1;
	long int b = 2;
	long int c;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%li, ", a);
			c = b + a;
			a = b;
			b = c;
		}
		else
			printf("%li\n", a);
	}
	return (0);
}
