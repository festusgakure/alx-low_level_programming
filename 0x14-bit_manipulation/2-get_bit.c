#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number (in decimal) to get the bit from
 * @index: The position of the bit you want to get starting from 0
 *
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
