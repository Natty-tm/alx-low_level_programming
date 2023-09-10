#include <stdio.h>

/**
 * main - is the main function
 * Return: is always 0
 */

int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; s--)
		putchar(s);
	putchar('\n');
	return (0);
}
