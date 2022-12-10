#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char line;

	line = '\n';
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	putchar(line);
	return (0);
}
