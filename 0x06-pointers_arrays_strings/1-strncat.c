#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: pointer to first string
* @src: pointer to second string
* @n : int n
* Return: pointer to concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
    size_t dest_len = strlen(dest);
    size_t i;

    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
