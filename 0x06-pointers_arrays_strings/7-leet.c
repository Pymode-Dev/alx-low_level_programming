#include "main.h"

/**
 * let - Leet encoding
 * @s: string
 * Return: Encoded string
 */

char *leet(char *s)
{
	int i, j, index;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;

		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				index = j;
				s[i] = numbers[index];
			}
			j++;
		}
		i++;
	}

	return (s);
}
