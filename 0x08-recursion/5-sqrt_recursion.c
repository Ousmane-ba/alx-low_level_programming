#include "main.h"

/**
 * check - function that checks for the natural square root
 * @a:int
 * @i:int
 * Return: int
 */

int check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
