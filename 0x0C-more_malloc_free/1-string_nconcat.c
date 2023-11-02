#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to the new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len1, len2;

	/* check for NULL arguments */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate the lengths of the strings */
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	/* allocate memory for the new string */
	if (n >= len2)
		n = len2;
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	/* copy the strings to the new string */
	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		new_str[i] = s2[j];
	new_str[i] = '\0';

	return (new_str);
}

