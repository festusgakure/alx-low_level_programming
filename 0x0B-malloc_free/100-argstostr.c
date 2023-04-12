#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of a  program
 * @ac: An integer
 * @av: A Character
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		len++;
		len++;
	}
	len++;
	str = malloc(len * sizeof(char));
	if (str == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		str[index++] = av[i][j];
		str[index++] = '\n';
	}
	str[index] = '\0';
	return (str);
}
