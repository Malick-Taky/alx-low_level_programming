#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char line;

	line = '\n';
	for (alpha = 'z'; alpha >= 'a'; --alpha)
	{
		putchar(alpha);
	}
	putchar(line);
	return (0);
}
