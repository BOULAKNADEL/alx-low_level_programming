#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: pointer to string input
 *
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefixLength = 0;
	int stringIndex, acceptIndex;

	for (stringIndex = 0; s[stringIndex] != '\0'; stringIndex++)
	{
		if (s[stringIndex] != ' ')
		{  /* Changed 32 to ' ' for better clarity */
			for (acceptIndex = 0; accept[acceptIndex] != '\0'; acceptIndex++)
			{
				if (s[stringIndex] == accept[acceptIndex])
				{
					prefixLength++;
				}
			}
		} else
		{
			return (prefixLength);
		}
	}

	return (prefixLength);
}
