#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: Alwaays 0.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
