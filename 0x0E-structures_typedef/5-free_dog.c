#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - free the dog struct after been used
 * @d: the dog initializer
 * Return: void
 */


void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
