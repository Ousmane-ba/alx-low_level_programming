#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: pointer to first string
* @src: pointer to second string
* Return: pointer to concatenated string
*/

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
