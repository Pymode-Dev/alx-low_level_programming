#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
