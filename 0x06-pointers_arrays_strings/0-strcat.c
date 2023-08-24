#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 *@dest: string to append
 *@src: string to add
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = strlen(dest);

    while (*src != '\0')
        dest[dest_len++] = *src++;

    dest[dest_len] = '\0';

    return dest;
}

