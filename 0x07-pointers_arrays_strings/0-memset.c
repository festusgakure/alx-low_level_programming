#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: An array
 * @b: Constant
 * @n: Bytes to be ocupied
 * Return: Array with new values
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
