#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
/**
 * string_nconcat - concatenates n bytes of string
 * @s1: string 1
 * @s2: string 2
 * @n: the n bytes to concatenate
 * Return: char or NULL
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *new;
	int length;
	int num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	if (num >= _strlen(s2))
		num = _strlen(s2);

	length = _strlen(s1) + _strlen(s2) + 1;
	new = malloc(sizeof(*new) * length);

	if (new == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		*(new + i) = s1[i];
		i++;
	}

	j = 0;
	while (j < num)
	{
		*(new + i) = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';

	return (new);
}

/**
 * _strlen - length of string
 * @str: the string
 * Return: int
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
