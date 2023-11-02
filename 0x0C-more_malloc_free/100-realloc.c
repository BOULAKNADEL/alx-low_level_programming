#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the previous memory block
 * @old_size: size of the previous memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the new memory block, or NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, min;

	/* check for special cases */
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* allocate memory for the new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* copy the contents of the old block to the new block */
	min = (new_size > old_size) ? old_size : new_size;
	for (i = 0; i < min; i++)
		new_ptr[i] = ((char *)ptr)[i];

	/* free the old block */
	free(ptr);

	return (new_ptr);
}

