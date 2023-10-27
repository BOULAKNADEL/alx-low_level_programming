#include <stdio.h>

/**
 * main - This program will print the number of arguments passed into it
 *
 * @argc: The number of command line arguments
 * @argv: The program name
 *
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, v;

	while (i < argc)
	{
		v = i;
		i++;
	}

	printf("%d\n", v);
	return (0);
}
