#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program will multiplies two arguments passed into it
 *
 * @argc: The number of command line arguments
 * @argv: The program name
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	return (0);
}
