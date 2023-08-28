#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area
 * @src to memory area @dest
 *
 *@src: pointer to the memory area
 *@dest: memory area where the n bytes will be copied
 *@n: bytes of the memory area
 *
 * Return: a pointer to the memory area @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0; /** because we have an unsigned value of n */

	for (counter = 0; counter < n; counter++)
	{
		src[counter] = dest[counter];
	}
	return (dest);
}
