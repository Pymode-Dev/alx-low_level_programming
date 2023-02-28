#include "main.h"

/**
 * print_rev - print string in reverse order
 * @str: the string to print in reverse.
 * Return: 0.
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(str[i]);
	}
	_putchar('\n');
}
