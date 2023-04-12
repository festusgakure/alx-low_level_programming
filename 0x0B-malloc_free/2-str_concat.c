#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: NULL on failure, concatenated string on sucess
 */

char *str_concat(char *s1, char *s2)
{
	char *final;
	int len1, len2, total, i, j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;
	total = len1 + len2 + 1;
	final = (char *) malloc(total * sizeof(char));
	if (final == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	final[i] = s1[i];
	for (j = 0; j < len2; j++)
	final[len1 + j] = s2[j];
	final[total - 1] = '\0';
	return (final);
}
