#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string whose length is determined
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
