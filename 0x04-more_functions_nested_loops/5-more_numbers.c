#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 *
 * Return 0.
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			putchar(j + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
