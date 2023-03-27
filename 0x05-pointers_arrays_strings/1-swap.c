#include "main.h"

/**
 * swap_int - waps the values of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}

