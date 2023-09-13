#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: voud here
 */
void print_alphabet_x10(void)
{
	char s;
	int d = 0;

	while (d <= 9)
	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
		_putchar('\n');
		d++;
	}
}
