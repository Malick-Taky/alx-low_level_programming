#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: argument of the function
 *
 * Return: 0 (Success)
 */
int print_last_digit(int c)
{
	int a;

	if (c < 0)
	{
		c = -c;
		a = c % 10;
	}
	if (a < 0)
	{
		a = -a;
		_putchar('0' + a);
	}
	return (a);
}
