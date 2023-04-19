#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -  prints a name
 * @name: A sting to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
