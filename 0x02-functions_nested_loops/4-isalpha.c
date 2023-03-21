#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Checks to compare
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
