#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print all single digit numbers
 *              of base 10 starting from 0 and using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		num++;
	}
	putchar('\n');
	return (0);

}
