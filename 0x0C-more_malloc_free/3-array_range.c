#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * *array_range - creates an  array of integers
 *@min: Starting point
 *@max: End point
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr;
	int len;
	int i = 0;

	if (min > max)
	return (NULL);
	len = (max - min) + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
	return (NULL);
	while (i < len)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
