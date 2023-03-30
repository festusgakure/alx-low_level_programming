#include "main.h"

/**
 * _strncp -  Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: Number of strings to be copied to the destination
 * Return: The sestination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
