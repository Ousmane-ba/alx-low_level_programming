#include "main.h"

/**
* print_last_digit - prints the last ten digits
* @n: the parameter
* Return: returns the last 10 digits of a number
*/

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		_putchar(x);
		return (x);
	}
}
