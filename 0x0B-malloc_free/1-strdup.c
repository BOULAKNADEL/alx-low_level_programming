#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *s;
	int i, lengo = 0;

	if (str == NULL)
		return (NULL);

	while (str[lengo])
		lengo++;

	s = malloc(sizeof(char) * (lengo + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < lengo; i++)
		s[i] = str[i];

	s[lengo] = '\0';

	return (s);
}

