#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main-add
 *Return:0
 *@argc:count
 *@argv:value
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
