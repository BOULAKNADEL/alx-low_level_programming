#include"main.h"

/**
 * print_most_numbers - print 10 times te numbers from 0 to 14
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;
	int count;

	for (num = 0; num <= 13; num++)
	{
		for (count = 0; count <= 13; count++)
		{
			if (cout > 9)
			{
				_putchar('1');
				_putchar(count % 10 + '0');
			}
		_putchar('\n');
		}
	}
}
