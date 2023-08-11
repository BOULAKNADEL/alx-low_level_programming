#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print all single digit numbers
 *              of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);

}
