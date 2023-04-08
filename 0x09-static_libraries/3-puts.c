#include "main.h"

/**
 * _puts - prints a string from a pointer
 * @str: String to be printed
 * Return: Void
 */

void _puts(char *str)
{
	while  (*str != '\0')
	{
		_putchar(*str++);
	}
	putchar('\n');
}
