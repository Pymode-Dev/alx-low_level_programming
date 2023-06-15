#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}


int main()
{
	char *a;
	int i;

	a = malloc(sizeof(char) * 10);
	a = _realloc(a, sizeof(char) * 10, sizeof(char) * 98);
	
	i = 0;
	while (i < 98)
	{
		a[i++] = 98;
	}
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
