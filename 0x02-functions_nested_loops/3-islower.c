#include "main.h"

/**
* _islower -> checks if the character is in lowercase
* Return: returns 1 or 0 
* c is either in lowercase or in uppercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} 
	else
	{
		return (0);
	}
}
