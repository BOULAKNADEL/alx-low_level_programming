#include "main.h"

/**
 * more_numbers - print numbers 10 times from 0 to 14
 * 
 * Return: void
 */

void more_numbers(void)
{

int i, count;
	for (i = 0; i <= 9; i++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count >= 10)
			_putchar('1');
			_putchar(count % 10 + '0');
		}
			_putchar('\n');
		}
}
