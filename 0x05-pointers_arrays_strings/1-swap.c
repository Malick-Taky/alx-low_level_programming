#include "main.h"

/**
 * swap_int - swap the values of two integers.
 *
 * @a: The first argument of the function
 * @b: The second argument of the function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
