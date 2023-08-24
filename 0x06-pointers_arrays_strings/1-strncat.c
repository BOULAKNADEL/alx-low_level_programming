#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, j;

	k = 0;
	j = 0;

	while (dest[k] != '\0')
		k++;

	while (src[j] != '\0' && j < n)
	{
		dest[k] = src[k];
		k++;
		j++;
	}

	dest[k] = '\0';

	return (dest);
}
