#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the memory with constant byte
 * @s: memory to be filled
 * @b: charater to copy
 * @n: number of times to copy character b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
	return (NULL);
	_memset(arr, 0, nmemb * size);
	return (arr);
}
