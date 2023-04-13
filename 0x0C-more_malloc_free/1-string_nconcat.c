#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: number of bytes for s2
 * Return: NULL on failure, concatenated string on sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1, total, i, j;

	len1 = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1] != '\0')
	len1++;
	total = len1 + n + 1;
	conc = malloc(total * sizeof(char));
	if (conc == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	conc[i] = s1[i];
	for (j = 0; j < n; j++)
	conc[len1 + j] = s2[j];
	conc[total - 1] = '\0';
	return (conc);
}
