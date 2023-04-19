#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: Array containing integer in question
 * @size: size of the array
 * @cmp: pointer
 * Return: index of array if success, if fail -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
