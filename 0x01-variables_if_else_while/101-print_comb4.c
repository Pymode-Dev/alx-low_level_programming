#include <stdio.h>

/**
 * main - Print combination of 3 numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			for (n3 = n2 + 1; n3 < 10; n3++)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');

				if (!((n1 == 7) && (n2 == 8) & (n3 == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
