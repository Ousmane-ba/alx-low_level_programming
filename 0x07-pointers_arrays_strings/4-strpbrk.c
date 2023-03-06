#include "main.h"

/**
* _strpbrk - Function that searches a string in any of a set of bytes
* @s: occurence in the string
* @accept: matches one of the bytes
* Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('NULL');
}
