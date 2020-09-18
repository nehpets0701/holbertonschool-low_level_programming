#include <stdio.h>

/**
 *main-comb3
 *Return:0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 48 ; num1 <= 57 ; num1++)
	{
		/*putchar(num1);*/

		for (num2 = 49 ; num2 <= 57 ; num2++)
		{
			if (num1 != num2)
			{
				if (num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(',');
					putchar(' ');
				}		
			}
		}
	}

	return (0);
}
