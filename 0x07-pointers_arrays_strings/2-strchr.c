#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String in question
 * @c: Character to be loated in s
 * Return: The first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i, j, len;

	i = 0;
	len = 0;
	while (s[i] != '\n')
	{
		len++;
		i++;
	}
	for (j = 0; j < len; i++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (NULL);
}
