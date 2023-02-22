#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int
 * Return: Always 0.
 *
 */

int print_last_digit(int n)
{
	int x;

	if (n >= 0)
	{
		x = n % 10;
		_putchar(x + '0');
	} else
	{
		x = -(n % 10);
		_putchar(x + '0');
	}
	return (x);
}
