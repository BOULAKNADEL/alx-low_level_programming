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
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
