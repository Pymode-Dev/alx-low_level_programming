#include <stdio.h>

/**
 * _strlen_recursion - return the length of a string
 * @str: string to calculates its length
 * Return: int
 */

int _strlen_recursion(char *str)
{
	if (*str != '\0')
	{
		return (1 + _strlen_recursion(str + 1));
	}
}
