#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse recursively
 * @str: the string to print
 * Return: void
 */

void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		putchar(*str);
	}
}
