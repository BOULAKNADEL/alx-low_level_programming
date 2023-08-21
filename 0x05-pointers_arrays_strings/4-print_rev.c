#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: it's void
*/

void rev_string(char *s)
{
	int j, i;
	char ch;


	for (j = 0; s[j] != '\0'; ++j)
		;


	for (i = 0; i < j / 2; ++i)
	{
		ch = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = ch;
	}

}
