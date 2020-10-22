#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main-main
 *Return:0
 *@argc:arg
 *@argv:arg
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*ptr)(a, b));
	return (0);
}
