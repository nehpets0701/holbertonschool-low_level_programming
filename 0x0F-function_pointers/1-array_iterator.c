#include "function_pointers.h"

/**
 *array_iterator-array
 *Return:0
 *@array:array
 *@size:size
 *@action:pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(i);
	}
}
