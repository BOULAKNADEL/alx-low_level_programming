#include "main.h"

/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int i, index;

	index = 0;
	while (s[index] != '\0')
		index++;

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
