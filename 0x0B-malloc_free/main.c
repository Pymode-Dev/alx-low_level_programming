#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main()
{
	char *s;

	s = _strdup(NULL);

	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
