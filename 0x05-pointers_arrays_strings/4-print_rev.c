#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: The string to print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;
	int n;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (n = (count - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
