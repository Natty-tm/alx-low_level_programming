#include <stdio.h>

/**
 * swap_int - swaps values
 * @a: first intiger to be swaped
 * @b: second intiger to be swaped
 * Return: is always zero
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

