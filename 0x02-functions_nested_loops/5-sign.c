#include "main.h"

/**
* print_sign - check the sign of the number
* @n: a number that could be positive or negative
* Return: returns 1 or 0 or -1 depending on the sign of n
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_puchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
