#include "main.h"

/**
 * _puts_recursive - recursive function that prints a string, folowed by a new line
 *@s: string to print
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
