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
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*ptr)(int, int);

	ptr = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*ptr)(a, b));
	return (0);
}
