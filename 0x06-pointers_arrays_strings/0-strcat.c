#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: pointer to first string
* @src: pointer to second string
* Return: pointer to concatenated string
*/
char *_strcat(char *dest, char *src)
{
    size_t dest_len = strlen(dest);
    size_t i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
