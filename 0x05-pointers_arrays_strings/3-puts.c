#include "main.h"

/**
 * _puts - prints a string
 * @str: the string to print
 * Return: is always zero
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
	_putchar(*str);
}
_putchar('\n');
}
