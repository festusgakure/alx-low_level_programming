#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, cntr = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			cntr++;
		}
		else if (cntr)
			_putchar('0');
	}
	if (!cntr)
		_putchar('0');
}
