#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s);
int _pal(char *str, int len);

/**
 * _strlen_recursion - get the length of a string
 * @s: the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * _pal - check if the string is palindrome
 * @str: the string
 * @len: the length of the string
 * Return: int
 */

int _pal(char *str, int len)
{
	if (len < 1)
		return (1);
	if (*str == *(str + len))
		return (_pal(str + 1, len - 2));
	return (0);
}

/**
 * is_palindrome - the main function that check
 * @str: the string to check
 * Return: int
 */

int is_palindrome(char *str)
{
	int l = _strlen_recursion(str);

	return (_pal(str, l - 1));
}
