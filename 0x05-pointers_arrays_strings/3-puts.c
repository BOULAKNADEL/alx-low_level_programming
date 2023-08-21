#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: no return (void)
*/

void _puts(char *str)
{
	int i;

    for (i = 0; *str != '\0'; *str++)
    {
        _putchar(*str + '0');
        i++;
    }
    _putchar('\n');
}
