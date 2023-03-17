#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 * return: Always 0.
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
