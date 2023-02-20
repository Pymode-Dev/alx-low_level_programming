#include <stdio.h>

/**
 * main - Prints 0123456789abcdef
 *
 * Return: Always 0.
 */

int main(void)
{
	int number;
	char alpha;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
