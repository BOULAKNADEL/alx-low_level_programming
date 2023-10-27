#include <stdio.h>

/**
 * main - This program will print all arguments it receives
 *
 * @argc: the number of command line arguments
 * @argv: the program name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}
	return (0);
}
