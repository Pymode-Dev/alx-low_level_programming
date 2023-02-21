#include <stdio.h>

/**
 * main - Print 2-2 combination
 *
 * Return: Always 0.
 */

int main(void)
{
	int n1, n2, d1, d2, d3, d4;

	for (n1 = 0; n1 < 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 90; n2++)
		{
			d1 = n1 / 10;
			d2 = n1 % 10;
			putchar(d1 + '0');
			putchar(d2 + '0');
			putchar(' ');
			d3 = n2 / 10;
			d4 = n2 % 10;
			putchar(d3 + '0');
			putchar(d4 + '0');
			if (n1 != 98 || n2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
