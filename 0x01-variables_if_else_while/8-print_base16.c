#include <stdio.h>

/**
 * main - Entry point
 * Description: print numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int hex = 48;

	while (hex <= 102)
	{
		if (hex == 57)
		{
			hex += 39;
		}
		hex++;
	}
	putchar('\n');
	return (0);

}
