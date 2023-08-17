#include "main.h"

/**
 * print_square - printing square
 *
 * @size: is the size of the square
 *
 * Return: void
 */


void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

}
