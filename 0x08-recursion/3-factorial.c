#inlcude <stdio.h>

/**
 * factorial - calculates the multiplication of n by n - 1
 * @n: the number to calculates its factorial
 * Return: 0 or 1 or int
 */

int factorial(int n)
{
	if (n ==  1 || n == 0)
		return (1);
	return n * factorial(n - 1);
}
