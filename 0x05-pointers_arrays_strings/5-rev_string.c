#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @str: the string to reverse
 * Return: 0.
 */

void rev_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		char x[] = str[i];
	}
	*str = x;
}
