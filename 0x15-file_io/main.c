#include "main.h"

int main(int ac, char **av)
{
	int n;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}

	n = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", n);

	return (0);
}
