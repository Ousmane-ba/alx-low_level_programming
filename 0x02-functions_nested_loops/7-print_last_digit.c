#include "main.h"

/**
* print_last_digit - prints the last ten digits
* @n: the parameter
* Return: returns the last 10 digits of a number
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	}
	return (n % 10);
}
