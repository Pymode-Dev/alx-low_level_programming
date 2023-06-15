#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create array of char
 * @size: the size of the array
 * @c: the character
 * Return: c or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));
	unsigned int i = 0;

	if (array == 0 || size == 0)
		return (NULL);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}

	return (array);
}
