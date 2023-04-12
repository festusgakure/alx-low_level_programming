#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	int len, i;
	char *copy;

	if (str == NULL)
	{
	return (NULL);
	}
	len = strlen(str);
	copy = (char *) malloc((len + 1) * sizeof(char));
	if (copy == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
	{
	copy[i] = str[i];
	}
	copy[len] = '\0';
	return (copy);
}
