#include "main.h"

/**
 *_strlen_recursion -  function that prints the length string recursively
 *@s: string
 *Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
