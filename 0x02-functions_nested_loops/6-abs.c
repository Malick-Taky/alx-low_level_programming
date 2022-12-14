#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: arguments of the function
 *
 * Return: result Success
 */
int _abs(int c)
{
	int result;

	if (c < 0)
		result = c * (-1);
	else
		result = c * c;
	return (result);
}
