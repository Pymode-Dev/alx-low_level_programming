#include <stdio.h>
#include <stdlib.h>
#include "main.h"


int main()
{
	char *concat;

	concat = string_nconcat("Hello ", "Qatar", 1);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
