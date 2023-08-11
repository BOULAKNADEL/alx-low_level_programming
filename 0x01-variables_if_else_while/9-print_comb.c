#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
            putchar(' ');
		}
	    num++;
	}
	putchar('\n');
	return (0);

}
