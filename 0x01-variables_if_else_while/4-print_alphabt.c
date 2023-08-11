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
	char low = 'f';
    char alp = 'r';
	/*alpha in lowercase*/
	while (alpha <= 'd')
	{
		putchar(alpha);
		alpha++;
	}
	/*alpha in uppercase*/
	while (low <= 'p')
	{
		putchar(low);
		low++;
	}
    while (alp <= 'z')
    {
        putchar(alp);
        alp++;
    }
	putchar('\n');
	return (0);

}
