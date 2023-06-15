#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *array = (char*) malloc(size * sizeof(c));

	if (array == 0)
		return (NULL);
	return (array);
}
