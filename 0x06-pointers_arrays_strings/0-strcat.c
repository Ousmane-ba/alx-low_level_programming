#include "main.h"
#include <stdio.h>

/**
* _strcat - function that concatenates two strings
* @dest: first string
* @dest: second string
* Return: char
*/

char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
    	size_t i;

    	for (i = 0 ; i < n && src[i] != aq\0aq ; i++)
        	dest[dest_len + i] = src[i];
    	dest[dest_len + i] = aq\0aq;

    return dest;
}
