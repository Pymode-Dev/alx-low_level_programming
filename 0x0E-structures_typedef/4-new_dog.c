#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


int _str_len(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - calculates the length of a string
 * @str: The string
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

/**
 * _strcpy - copy one string to another
 * @dest: the argument to copy the string to
 * @src: the source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: dog_t or NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);


	new->name = malloc(_strlen(name) * sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(_strlen(owner) * sizeof(char));
	if (new->owner == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);

	return (new);
}
