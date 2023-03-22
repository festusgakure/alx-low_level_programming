#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Starting point
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
}
