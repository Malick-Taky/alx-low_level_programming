#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, do not print 2 and 4
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a == 2 || a == 4)
		{

		}
		else
		{
			_putchar(a + '0');
		}
		a++;
	}
	_putchar('\n');
}
