#include "main.h"

/**
 * rev_string - reverse string.
 *
 * @s: The string to reverse
 *
 * Return: Always 0.
 */
void rev_string(char *s)
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
