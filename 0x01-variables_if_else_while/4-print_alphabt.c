#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print alphabets in lowercase
 *               without 'e' and 'q'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	/*alpha without 'e' and 'q'*/
	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
		putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);

}
