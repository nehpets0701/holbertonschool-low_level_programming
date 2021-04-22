#include "search_algos.h"

/**
*jump_search-jump search
*Return:index of value
*@array:input
*@size:size
*@value:value to look for
*/
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = size ^ (1 / 2);
	unsigned int i, j = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i = i + step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] >= value)
		{
			if (array[i] == value)
				return (value);

			for (j = i - step; j == i; j++)
			{
				if (array[j] == value)
					return (array[j]);
			}
			return (-1);
		}
		else
			continue;
	}

	return (-1);
}
