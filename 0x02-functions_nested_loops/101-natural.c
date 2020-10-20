#include <stdio.h>

/**
 *main-main
 *Return:0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
			continue;
		}
		if (i % 3 == 0)
		{
			sum += i;
			continue;
		}
		if (i % 5 == 0)
		{
			sum += i;
			continue;
		}
	}
	printf("%i\n", sum);
	return (0);
}
