#include "main.h"

/**
* _strstr - Function that locates a substring
* @haystack: the longer string to search
* @needle: first occurence of the substring
* Return: Always 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
