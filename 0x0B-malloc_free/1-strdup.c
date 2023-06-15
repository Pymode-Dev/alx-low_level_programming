#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);

/**
 * _strdup - A function that duplicates string and return its pointer
 * @str: The string to duplicate
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	int i = _strlen(str) + 1;
	char *new = (char *) malloc(i * sizeof(char));
	unsigned int n = 0;

	if (str == NULL || new == NULL)
		return (NULL);

	while (str[n] != '\0')
	{
		*(new + n) = str[n];
		n++;
	}
	new[n] = '\0';
	return (new);
}


/**
 * _strlen - return  the length of a string
 * @str: the string
 * Return: int
 */

int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
