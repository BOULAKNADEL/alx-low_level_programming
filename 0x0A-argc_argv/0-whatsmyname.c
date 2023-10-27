#include <stdio.h>

/**
 * main - This program will print its name
 *
 * @argc: the number of command line agrguments
 * @argv : the program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
