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
    char *s = dest;
    
    while (*dest)
    {
        dest++;
    }
    
    while (*src)
    {
        *dest++ = *src++;
    }
    
    *dest = '\0';
    
    return s;
}
