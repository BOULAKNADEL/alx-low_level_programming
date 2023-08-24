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

    /* Move pointer to end of destination string */
    while (*cp != '\0')
        dest++;

    /* Copy characters from source string to end of destination string */
    while (*src != '\0')
        *dest++ = *src++;

    /* Add null terminator to end of destination string */
    *dest = '\0';

    return dest;
}
