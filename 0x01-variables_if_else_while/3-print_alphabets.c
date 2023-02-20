#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char upper;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
