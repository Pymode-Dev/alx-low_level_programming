#include "main.h"

/**
 * _abs - Absolute val
 * Description: computes absolute value of int
 * @i: Interger
 * Return: Zero
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	else if (i > 0)
	{
		i = i;
	}
	else
	{
		i = 0;
	}
	return (i);
}
