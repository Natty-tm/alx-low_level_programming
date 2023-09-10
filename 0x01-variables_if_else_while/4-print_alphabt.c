#include <stdio.h>

/**
 * main - it is the main function
 * Return: is always zero
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p != 'e' && p != 'q')
			putchar(p);
	}
	putchar('\n');
	return (0);
}
