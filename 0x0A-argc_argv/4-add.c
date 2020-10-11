#include <stdio.h>
#include <stdlib.h>

/**
 *main-add
 *Return:0
 *@argc:count
 *@argv:value
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i <= argc ; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		j += atoi(argv[i]);
	}

	printf("%d\n", j);
	return (0);
}
