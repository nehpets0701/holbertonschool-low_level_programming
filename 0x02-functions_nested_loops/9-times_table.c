#include "holberton.h"

int print_something(int num)
{
	int i, j;
	for (i = 0; i < num + 1; i++)
	{
		for (j = 0; j < num + 1; j++)
		{
			printf("%d", i * j);
			if (j < num)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	return (0);
}
