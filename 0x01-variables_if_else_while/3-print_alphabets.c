#include <stdio.h>

/**
 * main - Entry point
 * Description: This program will print alphabets in lowercase
 *               and then in uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha = 'a';
	char low = 'A';
	/*alpha in lowercase*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	/*alpha in uppercase*/
	while (low <= 'Z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);

}
