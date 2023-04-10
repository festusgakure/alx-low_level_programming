#include "main.h"
#include <stdio.h>

/**
 * prints program name, followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array of charcater pointer listing all arguments
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
