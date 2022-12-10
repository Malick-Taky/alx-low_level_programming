#include <stdio.h>

/**
 * main - print numbers from 0 to 9 with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;
	int line;

	line = '\n';
	for (alpha = '0'; alpha <= '9'; alpha++)
	{
		putchar(alpha);
	}
	putchar(line);
	return (0);
}
