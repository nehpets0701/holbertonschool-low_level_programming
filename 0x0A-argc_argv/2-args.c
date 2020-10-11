#include <stdio.h>
/**
 *main-arg
 *Return:0
 *@argc:count
 *@argv:value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
