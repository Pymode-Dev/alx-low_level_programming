#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times.
 *
 * Return: Always 0.
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(print_alphabet());
	}
	_putchar('\n');

	return (0);
}
