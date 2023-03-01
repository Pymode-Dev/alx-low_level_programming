#include "main.h"

/**
 * _atoi - converts str to int
 * @s: the string to convert
 * Return: int val
 */

int _atoi(char *s)
{
	int i, j, number;
	
	i = 0;
	j = 1;
	number = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				number = (s[i] - '0') * j + number * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (number);
}
