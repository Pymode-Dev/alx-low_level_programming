#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: the string to reverse
 * Return: 0.
 */

void rev_string(char *s)
{
	int i = 0, j = 0, x, y;

	while (s[i] != '\0')
	{
		i++;
	}
	x = i;
	i = 0;
	j = x - 1;

	while (i < j)
	{
		y = s[i];
		s[i] = s[j];
		s[j] = y;
		i++;
		j--;
	}
}
