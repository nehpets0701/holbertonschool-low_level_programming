#include <stdio.h>
#include <stdlib.h>
/**
 *main-mul
 *Return:0
 *@argc:count
 *@argv:value
 */
int main(int argc, char *argv[])
{
	int j = argc;

	if (j == 3)
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
