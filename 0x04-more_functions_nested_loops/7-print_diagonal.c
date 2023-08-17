#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

}
