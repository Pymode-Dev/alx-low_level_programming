#include <stdio.h>

/**
 * _puts_recursion - put character on to the screen recursively
 * @s: the string to print recursively
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
