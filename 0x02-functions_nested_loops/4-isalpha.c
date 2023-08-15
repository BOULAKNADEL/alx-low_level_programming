#include "main.h"
/**
 * _isalpha - checks if the character is a letter both
 *           lowercase or uppercase
 *
 * @c: check inputs of function
 *
 * Return: return 1 if 'c' is lowercase or uppercase,
 *          otherwise always 0 (success)
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c <= 97 && c <= 122)
	return (1);
return (0);
}
