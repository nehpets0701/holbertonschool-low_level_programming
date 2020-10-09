#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 1;

	(void) argv;

	while (i < argc)
	{
		i++;
	}

	printf("%d\n", i - 1);
	return (0);
}
