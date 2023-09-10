#include <stdio.h>

/**
 * main - is the main function
 * Return: is always 0
 */

int main(void)
{
	int s;
	char d;

	for (s = 0; s < 10; s++)
		putchar((s % 10) + '0');
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
