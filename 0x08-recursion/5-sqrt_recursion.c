#includ "main.h"

/**
 * _sqrt_recursion - function that returns natural square root oa number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
/**
 * sq - finds the square of numbers and compares
 * @num: number
 * @root: root
 * Return: sq root or -1
 */

int sq(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	else if (root * root < num)
	{
		return (sq(num, root + 1));
	}
	else
	{
		return (-1);
	}
}
