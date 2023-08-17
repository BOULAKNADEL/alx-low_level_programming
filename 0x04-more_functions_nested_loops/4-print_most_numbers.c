#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9 and don't print 2 and 4
 *
 * Return: void
*/
void print_numbers(void)
{
	int count = 0;

	while (count <= 9)
	{
		if ((count == 2) || (count == 4))
		{
		continue;
		}
		_putchar(count + '0');
		count++;
		_putchar('\n');
	}
}
