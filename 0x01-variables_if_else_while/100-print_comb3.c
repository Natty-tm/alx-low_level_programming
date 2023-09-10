#include <stdio.h>

/**
 * main - is the main function
 * Return: is always o
 */
int main(void)
{
int s, d;

for (s = 0; s < 9; s++)
{
for (d = s + 1; d < 10; d++)
{
putchar((s % 10) + '0');
putchar((d % 10) + '0');
if (s == 8 && d == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
