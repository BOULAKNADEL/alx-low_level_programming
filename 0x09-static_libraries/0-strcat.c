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
	char *cp = dest;

	/* Move pointer to end of destination string */
	while (*cp != '\0')
		cp++;

	/* Copy characters from source string to end of destination string */
	while (*src != '\0')
		*cp++ = *src++;

	/* Add null terminator to end of destination string */
	*cp = '\0';

	return (dest);
}
