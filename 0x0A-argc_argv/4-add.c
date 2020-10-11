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
	int i = 0;
	int j = 1;

	if (argc > 0)
	{
		while (j <= argc)
		{
			i += atoi(argv[j]);
			j++;
		}
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("0\n");
		return (1);
	}

	return (0);
}
