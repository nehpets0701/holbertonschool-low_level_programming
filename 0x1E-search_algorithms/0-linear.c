#include "search_algos.h"

/**
 *linear_search-linear search
 *Return: first index where value is located
 *@array:input to search
 *@size:size of array
 *@value:value to look for
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
