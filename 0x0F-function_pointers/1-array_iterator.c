#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function on each element of nan array
 * @array: the array
 * @size: size of the array
 * @action: function to perform on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;
	for (p = 0; p < size; p++)
		action(array[p]);
}
