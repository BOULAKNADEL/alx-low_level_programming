#include "main.h"
#include <stdlib.h>

/**
 * print_string - moves a string one place to the left and prints the string
 * @str: string to move
 * @len: size of string
 *
 * Return: void
 */
void print_string(char *str, int len)
{
	int i, j;

	i = j = 0;
	while (i < len)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == len - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * multiply - multiplies a char with a string and places the answer into dest
 * @digit: char to multiply
 * @num: string to multiply
 * @num_len: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_len: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *multiply(char digit, char *num, int num_len, char *dest, int dest_len)
{
	int j, k, prod, prod_carry, sum, sum_carry;

	prod_carry = sum_carry = 0;
	for (j = num_len, k = dest_len; j >= 0; j--, k--)
	{
		prod = (digit - '0') * (num[j] - '0') + prod_carry;
		prod_carry = prod / 10;
		sum = (dest[k] - '0') + (prod % 10) + sum_carry;
		sum_carry = sum / 10;
		dest[k] = sum % 10 + '0';
	}
	for (sum_carry += prod_carry; k >= 0 && sum_carry; k--)
	{
		sum = (dest[k] - '0') + sum_carry;
		sum_carry = sum / 10;
		dest[k] = sum % 10 + '0';
	}
	if (sum_carry)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_digits(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * initialize - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void initialize(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int len1, len2, total_len, temp_index, i;
	char *answer;
	char *temp;
	char err[] = "Error\n";

	if (argc != 3 || check_digits(argv))
	{
		for (temp_index = 0; err[temp_index]; temp_index++)
			_putchar(err[temp_index]);
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
		;
	for (len2 = 0; argv[2][len2]; len2++)
		;
	total_len = len1 + len2 + 1;
	answer = malloc(total_len * sizeof(char));
	if (answer == NULL)
	{
		for (temp_index = 0; err[temp_index]; temp_index++)
			_putchar(err[temp_index]);
		exit(98);
	}
	initialize(answer, total_len - 1);
	for (temp_index = len2 - 1, i = 0; temp_index >= 0; temp_index--, i++)
	{
		temp_index = (total_len - 2) - i;
		temp = multiply(argv[2][temp_index], argv[1], len1 - 1, answer, temp_index);
		if (temp == NULL)
		{
			for (temp_index = 0; err[temp_index]; temp_index++)
				_putchar(err[temp_index]);
			free(answer);
			exit(98);
		}
	}
	print_string(answer, total_len - 1);
	return (0);
}

