#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print _putchar using putchar prototype
 * Return: Always 0 (Success)
*/
int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
