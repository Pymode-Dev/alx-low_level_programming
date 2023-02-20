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

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	putchar('\n');

	return (0);
}
