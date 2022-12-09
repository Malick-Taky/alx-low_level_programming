#include <stdio.h>

/**
 * main - prints the alphabet in lower case, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char line;

	line = '\n';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar(line);
	return (0);
}
