#include <stdio.h>
/**
 * main - Prints alphabets in lowercase and lowercase
 * return: Always 0
 */
int main(void)
{
	char l;
	char L;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}
	putchar('\n');

	return (0);
}
