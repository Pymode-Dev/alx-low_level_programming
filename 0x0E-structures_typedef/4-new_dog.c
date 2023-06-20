#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


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

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
