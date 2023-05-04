#include "main.h"
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned int with decimal value of binsry number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec;

	dec = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
	}
	return (dec);
}
