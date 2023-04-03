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

	i = 0;
	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
