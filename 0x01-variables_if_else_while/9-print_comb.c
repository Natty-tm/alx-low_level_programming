#include <stdio.h>

/**
 * main - is the main function
 * Return: is always o
 */

int main(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		putchar((s % 10) + '0');
			if (s == 9)
				continue;
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
