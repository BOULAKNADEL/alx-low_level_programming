#include "main.h"

/**
 * _strchr - a function that locates a character in a string @s
 *
 *@s: the string
 *@c: occurrence of the character
 *
 * Return: Returns a pointer to the first occurrence of the character
 *          @c in the string @s, or NULL if the character is not found
 *
*/

char *_strchr(char *s, char c)
{
	char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
		else if (s[i] == '\0')
		{
			return (s + i);
		}
	}
	return (NULL);
}

}
