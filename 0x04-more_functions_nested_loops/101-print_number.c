#include"main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int bon = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		bon = -bon;
	}

	/*print the first few digits*/
	if ((bon / 10) > 0)
		print_number(bon / 10);

	/*print the last digit*/
	_putchar((bon % 10) + 48);
}
