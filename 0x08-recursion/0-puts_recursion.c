#include <stdio.h>

/**
 * _puts_recursion - put character on to the screen recursively
 * s: the string to print recursively
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_putchar(s + 1);
	}
}
