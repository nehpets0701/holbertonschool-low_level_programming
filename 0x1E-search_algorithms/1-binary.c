#include "search_algos.h"

/**
*binarySearch-real function
*Return:real value
*@arr:input
*@l:left
*@r:right
*@x:value
*/
int binarySearch(int arr[], int l, int r, int x)
{
	int mid = l + (r - l) / 2;
	int i;

	if (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i >= l && i <= r; i++)
		{
			if (i != r)
				printf("%d, ", arr[i]);
			else
				printf("%d\n", arr[i]);
		}

		if (arr[mid] == x)
			return (mid);
		if (arr[mid] > x)
			return (binarySearch(arr, l, mid - 1, x));
		return (binarySearch(arr, mid + 1, r, x));
	}

	return (-1);
}

/**
*binary_search-binary search
*Return: index where value is located
*@array:input
*@size:size
*@value:value to search for
*/
int binary_search(int *array, size_t size, int value)
{
	int l, r;

	if (array == NULL)
		return (-1);

	l = array[0];
	r = array[size - 1];

	return (binarySearch(array, l, r, value));
}
