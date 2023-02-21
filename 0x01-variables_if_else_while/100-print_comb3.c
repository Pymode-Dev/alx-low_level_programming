#include <stdio.h>

/**
 * main - Print Combination of 2 numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (!((n == 8) && (m == 9)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
