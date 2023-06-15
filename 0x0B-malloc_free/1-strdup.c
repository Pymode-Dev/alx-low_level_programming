#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - A function that duplicates string and return its pointer
 * @str: The string to duplicate
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int i = sizeof(str);
	char *new = (char *) malloc(i * sizeof(char));

	unsigned int n = 0;

	if (i == 0 || new == 0)
		return (NULL);

	while (str[n] != '\0')
	{
		*(new + n) = str[n];
		n++;
	}
	return (new);
}
