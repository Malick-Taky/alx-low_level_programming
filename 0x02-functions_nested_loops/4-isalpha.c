#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: argument of the function
 *
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
