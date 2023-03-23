#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
