#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main-main
 *Return:0
 *@argc-arg
 *@argv-arg
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' && b == 0) || (argv [2][0] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
