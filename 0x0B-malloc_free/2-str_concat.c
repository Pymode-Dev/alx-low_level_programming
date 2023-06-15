#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);

/**
 * str_concat - concatenates two strings together
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or string
 */


char *str_concat(char *s1, char *s2)
{
	int length = _strlen(s1) + _strlen(s2) + 1;
	char *new = (char *) malloc(length * sizeof(char));
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (new == NULL)
		return (NULL);


	while (s1[i] != '\0')
	{
		*(new + i) = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		*(new + i) = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}


/**
 * _strlen - Length of a string
 * @str: The string
 * Return: 0 or int
 */


int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (1);

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
