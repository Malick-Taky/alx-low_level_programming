#include <stdio.h>

/**
 * main - print all the letters except q and e
 *
 * Return: Always 0 (SUccess)
 */
int main(void)
{
	char alpha;
	char line;

	line = '\n';
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
		
		}
		else
		{
			putchar(alpha);
		}
	}
	putchar(line);
	return (0);
}
