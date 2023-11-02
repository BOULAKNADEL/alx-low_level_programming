#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total;

	/* check for zero arguments */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* calculate the total size of memory */
	total = nmemb * size;

	/* allocate memory using malloc */
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	/* set the memory to zero */
	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}

