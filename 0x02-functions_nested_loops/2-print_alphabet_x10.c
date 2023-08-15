#include"main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                 the alphabet a - z x10
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		for (i = 1; i < 10; i++)
		{
			_putchar(i);
		_putchar('\n');
		}
		return (0);
	}
}
