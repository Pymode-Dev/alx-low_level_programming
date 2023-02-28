#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @str: the string to reverse
 * Return: 0.
 */

void rev_string(char *str)
{
	int i = 0, j = 0, x, y;

	while (str[i] != '\0')
	{
		i++;
	}
	x = i;
	i = 0;
	j = x - 1;

	while (i < j)
	{
		m = str[i];
		str[i] = s[j];
		s[j] = m;
		i++;
		j--;
	}
}
