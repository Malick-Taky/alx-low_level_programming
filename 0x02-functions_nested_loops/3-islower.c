#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: parameter of the function
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	int alpha;

	alpha = 'a';


	while (alpha <= 'z')
	{
	if (c == alpha)
		return (1);
	alpha++;
	}
	return (0);
}
