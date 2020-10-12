#include <stdio.h>
#include <stdlib.h>

/**
 *main-coin
 *Return:int
 *@argc:count
 *@argv:value
 */
int main(int argc, char *argv[])
{
	int current = 0;
	int difference;
	int coinCount = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	while (current < atoi(argv[1]))
	{
		difference = atoi(argv[1]) - current;
		if (difference >= 25)
		{
			current += 25;
			coinCount++;
		}
		else if (difference >= 10)
		{
			current += 10;
			coinCount++;
		}
		else if (difference >= 5)
		{
			current += 5;
			coinCount++;
		}
		else if (difference >= 2)
		{
			current += 2;
			coinCount++;
		}
		else if (difference >= 1)
		{
			current += 1;
			coinCount++;
		}
	}
	printf("%d\n", coinCount);
	return (0);
}
