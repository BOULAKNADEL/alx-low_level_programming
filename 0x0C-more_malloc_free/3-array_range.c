#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	/* check for invalid arguments */
	if (min > max)
		return (NULL);

	/* calculate the length of the array */
	len = max - min + 1;

	/* allocate memory for the array */
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	/* fill the array with values from min to max */
	for (i = 0; i < len; i++)
		array[i] = min + i;

	return (array);
}

