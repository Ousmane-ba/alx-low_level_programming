#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check(n, 0));
}

/**
 * check - function checks the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root
 */

int check(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check(n, i + 1));
}
