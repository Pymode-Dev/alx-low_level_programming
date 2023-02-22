#include "main.h"

/**
 * times_table - print times of 9
 *
 * Return : Alays 0.
 *
 */

void times_table(void)
{
	int i;
	int res;

	for (i = 0; i <= 9;  i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar('0' + res);
			} else if (res >= 10)
			{
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
