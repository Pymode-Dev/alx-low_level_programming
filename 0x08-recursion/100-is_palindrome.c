# include "main.h"


/**
 * _strlen_recursion - Gives length of a string
 * @s: string
 * Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _pal - checks the chars
 * @s: string
 * @l: strlen
 * Return: xero 0r one
 */

int _pal(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (_pal(s + 1, l - 2));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 for palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_pal(s, len - 1));
}
