#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len_num1, len_num2, total_len, i, carry_over, n1, n2, *product, flag = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !is_digit(num1) || !is_digit(num2))
		errors();
	len_num1 = _strlen(num1);
	len_num2 = _strlen(num2);
	total_len = len_num1 + len_num2 + 1;
	product = malloc(sizeof(int) * total_len);
	if (!product)
		return (1);
	for (i = 0; i <= len_num1 + len_num2; i++)
		product[i] = 0;
	for (len_num1 = len_num1 - 1; len_num1 >= 0; len_num1--)
	{
		n1 = num1[len_num1] - '0';
		carry_over = 0;
		for (len_num2 = _strlen(num2) - 1; len_num2 >= 0; len_num2--)
		{
			n2 = num2[len_num2] - '0';
			carry_over += product[len_num1 + len_num2 + 1] + (n1 * n2);
			product[len_num1 + len_num2 + 1] = carry_over % 10;
			carry_over /= 10;
		}
		if (carry_over > 0)
			product[len_num1 + len_num2 + 1] += carry_over;
	}
	for (i = 0; i < total_len - 1; i++)
	{
		if (product[i])
			flag = 1;
		if (flag)
			_putchar(product[i] + '0');
	}
	if (!flag)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}

