#include "main.h"

/**
 * _isalpha - check if is an alphabet
 * @c: letter
 * Return: Always 0.
 *
 */

int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
