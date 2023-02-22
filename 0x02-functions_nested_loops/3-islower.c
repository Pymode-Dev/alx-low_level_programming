#include "main.h"

/**
 * _islower - print 1 or 0 if it is lowercase alphabet
 *@c: letter
 * Return: Always 0.
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
