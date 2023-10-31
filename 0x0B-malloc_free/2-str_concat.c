#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated space in memory,
 *          and null terminated. If either s1 or s2 is
 *          NULL, If the function fails, it returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, lengo1 = 0, lengo2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lengo1])
		lengo1++;
	while (s2[lengo2])
		lengo2++;

	s = malloc(sizeof(char) * (lengo1 + lengo2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < lengo1; i++)
		s[i] = s1[i];

	for (j = 0; j < lengo2; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}

