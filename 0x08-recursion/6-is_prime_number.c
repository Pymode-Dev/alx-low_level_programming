#include <stdio.h>

/**
 * is_prime_number - function to find if a number is a prime or not
 * @number: The number to check
 * Return: int
 */

int _prime(int number, int c);

int is_prime_number(int number)
{
	return (_prime(number, 2));
}

/**
 * _prime - checks if number is prime
 * @number: number
 * @c: number to check against
 * Return: 1 for prime, 0
 */

int _prime(int number, int c)
{
	if (number <= 1)
		return (0);
	else if (number % c == 0 || number <= 0)
		return (0);
	else
		return (_prime(number, c + 1));
}
