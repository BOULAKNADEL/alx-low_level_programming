#include "main.h"
#include <stdlib.h>

/**
 * Null_Or_Not - check if size is zero or if a pointer is NULL
 *
 * @size: The size of the array
 * @a: the pointer to check
 *
 * Return:  size = 0 or a = null
 */

int Null_Or_Not(unsigned int size, char *a)
{
	return (a == NULL || size == 0);
}

/**
 * create_array - This function will create an array of chars
 *
 * @size: the size of the array
 * @c: The initial value
 *
 * Return: This function will return a pointer to the aray
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *a = malloc(size * sizeof(char));

	if (Null_Or_Not(size, a))
		return (NULL);

	for (; i < size; i++)
		a[i] = c;

	return (a);
}

