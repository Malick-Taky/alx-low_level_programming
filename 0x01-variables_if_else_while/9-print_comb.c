#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int line;
	int coma;
	int space;

	line = '\n';
	coma = ',';
	space = ' ';
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(coma);
		putchar(space);
	}
	putchar(line);
	return (0);
}
