#include <stdio.h>

/**
 * _strlen - returns the length of the string
 * @str:the string to get the length
 * Return: the length od @str
 */

int _strlen(char *str)
{
size_t length = 0;

while (*str++)
length++;
return (length);
}
