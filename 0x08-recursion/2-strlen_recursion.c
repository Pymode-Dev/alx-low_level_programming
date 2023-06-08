#include <stdio.h>

/**
 * _strlen_recursion - return the length of a string
 * @str: string to calculates its length
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (int) (1 + _strlen_recursion(s + 1));
}
