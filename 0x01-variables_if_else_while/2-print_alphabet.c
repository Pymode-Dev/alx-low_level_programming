#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
