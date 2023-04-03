#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: Pointer to destination memory area
 * @src: Pointer to source memory area
 * @n: Bytes to be coppied from scr to dest
 * Return: The destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
