#include <stdio.h>
/**
 *main-num
 *Return:0
 *@argc:count
 *@argv:value
 */
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
