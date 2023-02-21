#include <stdio.h>

/**
 * main - Print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
