#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: An intager
 * Return: The squre root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (squarert(n, i));
}

/**
 * squarert - Finds possible square root of n using x
 * @n: An intager
 * @i: The squre root of n
 * Return: The squre root of n using i
 */
int squarert(int n, int i)
{
	if (i * i == n)
		return (i);
	return (squarert(n, i + 1));
}
