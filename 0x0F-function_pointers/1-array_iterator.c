#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: An array whole elements ara to be printed
 * @size: The size of thae array
 * @action: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
