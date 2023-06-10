#include "main.h"

/**
 * _isalpha - Checks if it is alpha
 * Description: Checks letters
 * @c: Param
 * Return: Zero
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
